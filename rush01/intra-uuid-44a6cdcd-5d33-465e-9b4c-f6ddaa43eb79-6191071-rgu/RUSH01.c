/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RUSH01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgu <rgu@student.42madrid.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:54:14 by rgu               #+#    #+#             */
/*   Updated: 2024/11/17 17:27:05 by rgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
void    print_table(int **table)
{
    int row;
    int column;
    char c;

    row = 0;
    column = 0;
    while (row < 4)
    {
        column = 0;
        while (column < 4)
        {
            c = table[row][column] + '0';
            write(1, &c, 1);
            if (column < 3)
                write(1, " ", 1);
            column++;
        }
        write(1, "\n", 1);
        row++;
    }
}

int    check_table(int **table, char **argv)
{
    int max;
    int box_visible;
    int row;
    int column;
    int arg_pos;

    row = 0;
    arg_pos = 16;
    //chequear fila 
    while (row < 4)
    {
        max = 0;
        column = 0;
        box_visible = 0;
        while (column < 4)
        {
            if (table[row][column] > max)
            {
                max = table[row][column];
                box_visible++;
            }
            column ++;
        }
        column --;
        if (box_visible + '0' == argv[1][arg_pos])
        {
            arg_pos += 8;
            box_visible = 0;
            max = 0;
            while (column >= 0)
            {
                if (table[row][column] > max)
                {
                    max = table[row][column];
                    box_visible++;
                }
                column --;
            }
            if (box_visible + '0' == argv[1][arg_pos])
            {
                arg_pos -= 6;
                row ++;
                continue;
            }
            else
            {
                return (0);
            }
        }
        else
            return(0);
        row++;
    }
	// AQUÍ EMPIEZA A COMPROBAR LAS COLUMNAS VERTICALMENTE
	column = 0;
    arg_pos = 0;
    while (column < 4)
    {
        max = 0;
        row = 0;
        box_visible = 0;
        
        while (row < 4)
        {
            if (table[row][column] > max)
            {
                max = table[row][column];
                box_visible++;
            }
            row++;
        }
        row--;
        if (box_visible + '0' == argv[1][arg_pos])
        {
            arg_pos += 8;
            box_visible = 0;
            max = 0;
            while (row >= 0)
            {
                if (table[row][column] > max)
                {
                    max = table[row][column];
                    box_visible++;
                }
                row--;
            }
            if (box_visible + '0' == argv[1][arg_pos])
            {
                arg_pos -= 6;
                column++;
                continue;
            }
            else
            {
                return (0);
            }
        }
        else
            return (0);
        column++;
    }
    return (1);
}

// chequear que no hay repeticion ni en fila ni en columna
bool    no_repeticion(int **table, int row, int column, int number)
{
    int x;

    x = 0;
    while (x < 4)
    {
        if (table[row][x] == number || table[x][column] == number)
        {
            return false;
        }
        x++;
    }
    return true;
}

//backtracking para resolver el grid
int backtrack(int **table, int row, int column, char **argv)
{
    int number;
    int next_row;
    int next_col;

    number = 1;
    if (row == 4)
        return (check_table(table, argv));
    if (column == 3)
    {
        next_row = row + 1;
        next_col = 0;
    }
    else
    {
        next_row = row;
        next_col = column + 1;
    }
    while (number <= 4)
    {
        if (no_repeticion(table, row, column, number))
        {
            table[row][column] = number;
            if (backtrack(table, next_row, next_col, argv))
                return (1);
            table[row][column] = 0;
        }
        number++;
    }
    return (0);
}

void solve(int **table, char **argv)
{
	
    if (backtrack(table, 0, 0, argv))
        print_table(table);
    else
        write(1, "No solution\n", 12);
}
	
#include <stdlib.h>
int main(int argc, char **argv) 
{
    int row;
    int column;
    if (argc != 2) 
    {
        write(1, "Error\n", 6);
        return (1);
    }

    // Crear tablero vacío
    int **table = malloc(4 * sizeof(int *));
    row = 0;
    while (row < 4)
    {
        table[row] = malloc(4 * sizeof(int));
        column = 0;
        while (column < 4)
        {
            table[row][column] = 0;
            column ++;
        }
        row ++;
    }

    // Resolver el problema
	solve(table, argv);
    // Liberar memoria
    row = 0;
    while (row < 4)
    {
        free(table[row]);
        row ++;
    }
    free(table);
    return (0);
}


/*
	 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
*/