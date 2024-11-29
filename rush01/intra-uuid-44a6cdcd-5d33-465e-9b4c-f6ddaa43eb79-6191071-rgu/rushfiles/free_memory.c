#include <stdlib.h>

int	free_memory(int **table)
{
	int row;
	row = 0;
	while (row < 4)
	{
		free(table[row]);
		row ++;
	}
	free(table);
	return (0);
}
