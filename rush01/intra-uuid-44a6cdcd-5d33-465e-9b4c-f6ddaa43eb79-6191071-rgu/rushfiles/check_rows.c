int	check_left_right(int **table, char **argv, int row, int arg_pos)
{
	int	max;
	int	box_visible;
	int	column;

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
		column++;
	}
	return (box_visible + '0' == argv[1][arg_pos]);
}

int	check_right_left(int **table, char **argv, int row, int arg_pos)
{
	int	max;
	int	box_visible;
	int	column;

	max = 0;
	column = 3;
	box_visible = 0;
	while (column >= 0)
	{
		if (table[row][column] > max)
		{
			max = table[row][column];
			box_visible++;
		}
		column--;
	}
	return (box_visible + '0' == argv[1][arg_pos]);
}

int	check_rows(int **table, char **argv)
{
	int	row;
	int	arg_pos;

	row = 0;
	arg_pos = 16;
	while (row < 4)
	{
		if (!check_left_right(table, argv, row, arg_pos))
			return (0);
		arg_pos += 8;
		if (!check_right_left(table, argv, row, arg_pos))
			return (0);
		arg_pos -= 6;
		row++;
	}
	return (1);
}