int backtrack(int **table, int row, int column, char **argv);
void print_table(int **table);

#include <unistd.h>
void solve(int **table, char **argv)
{
    if (backtrack(table, 0, 0, argv))
        print_table(table);
    else
        write(1, "No solution\n", 12);
}