
int	check_top_bottom(int **table, char **argv, int column, int arg_pos)
{
	int	max;
	int	box_visible;
	int	row;

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
	return (box_visible + '0' == argv[1][arg_pos]);
}

int	check_bottom_top(int **table, char **argv, int column, int arg_pos)
{
	int	max;
	int	box_visible;
	int	row;

	max = 0;
	row = 3;
	box_visible = 0;
	while (row >= 0)
	{
		if (table[row][column] > max)
		{
			max = table[row][column];
			box_visible++;
		}
		row--;
	}
	return (box_visible + '0' == argv[1][arg_pos]);
}

int	check_columns(int **table, char **argv)
{
	int	column;
	int	arg_pos;

	column = 0;
	arg_pos = 0;
	while (column < 4)
	{
		if (!check_top_bottom(table, argv, column, arg_pos))
			return (0);
		arg_pos += 8;
		if (!check_bottom_top(table, argv, column, arg_pos))
			return (0);
		arg_pos -= 6;
		column++;
	}
	return (1);
}
