/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:20:46 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/24 21:07:27 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_number(char **argv, int index)
{
	int	i;

	i = 0;
	while (argv[index][i] != '\0')
	{
		if (argv[index][i] < '0' || argv[index][i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	validate_args(char **argv, int argc)
{
	if ((argc == 2 && !is_number(argv, 1)) || (argc == 3
			&& !validate_args(argv, 2)) || (argc > 3) || (argc == 1))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
