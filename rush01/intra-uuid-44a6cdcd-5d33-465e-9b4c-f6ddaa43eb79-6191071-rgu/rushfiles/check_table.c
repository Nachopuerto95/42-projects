int	check_columns(int **table, char **argv);
int	check_rows(int **table, char **argv);

int	check_table(int **table, char **argv)
{
	if (!check_rows(table, argv))
		return (0);
	if (!check_columns(table, argv))
		return (0);
	return (1);
}
