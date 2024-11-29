#include <stdbool.h>
bool    no_repeat(int **table, int row, int column, int number);
int    check_table(int **table, char **argv);


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
        if (no_repeat(table, row, column, number))
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