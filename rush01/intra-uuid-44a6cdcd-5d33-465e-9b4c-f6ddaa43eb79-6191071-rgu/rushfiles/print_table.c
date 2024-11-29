#include <unistd.h>

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