#include <stdbool.h>

bool    no_repeat(int **table, int row, int column, int number)
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