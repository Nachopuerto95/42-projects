#include <stdlib.h>

int **make_empty_table()
{
	int **table = malloc(4 * sizeof(int *));
    int row;
	int column;

	row = 0;
	column = 0;
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

	return (table);
}