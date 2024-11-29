/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:20:46 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/24 21:08:14 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		validate_args(char **argv, int index);
int		get_arg_index(int argc);
void	print_number(char *c, char *buffer);

int	main(int argc, char **argv)
{
	int		dict;
	char	buffer[2048];
	int		bytes_read;
	int		arg_index;

	dict = open("numbers.dict", O_RDONLY);
	arg_index = get_arg_index(argc);
	bytes_read = read(dict, buffer, sizeof(buffer) - 1);
	buffer[bytes_read] = '\0';
	if ((!validate_args(argv, argc)) || (dict == -1) || bytes_read == -1)
	{
		return (1);
	}
	print_number(argv[arg_index], buffer);
	close(dict);
}
