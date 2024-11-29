#include <unistd.h>
int **make_empty_table();
void solve(int **table, char **argv);
int	free_memory(int **table);

int main(int argc, char **argv) 
{
	int	**table; 
	
	table = make_empty_table();
    if (argc != 2) 
    {
        write(1, "Invalid argument number\n", 6);
        return (1);
    }
    // Crear tablero vacío
	make_empty_table();
    // Resolver el problema
	solve(table, argv);
    // Liberar memoria
	free_memory(table);
}