/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:20:46 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/24 21:05:45 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_atoi(char *str);
char	*ft_itoa(int number);
int		ft_strlen(char *str);

void	do_print(char *c)
{
	int	i;

	i = 0;
	while (c[i] < 'a' || c[i] > 'z')
	{
		i++;
	}
	while (c[i] != '\n')
	{
		write(1, &c[i], 1);
		i++;
	}
}

void	print_units(char *c_num, char *buffer)
{
	char	*match;

	match = ft_strstr(buffer, c_num);
	do_print(match);
}

void	print_decs(char *c_num, char *buffer)
{
	int		aux;
	char	*itoa_result;
	int		num;
	char	*match;

	num = ft_atoi(c_num);
	aux = num / 10 * 10;
	itoa_result = ft_itoa(aux);
	match = ft_strstr(buffer, itoa_result);
	if (match)
		do_print(match);
	free(itoa_result);
	write(1, " ", 1);
	aux = num % 10;
	itoa_result = ft_itoa(aux);
	match = ft_strstr(buffer, itoa_result);
	if (match)
		do_print(match);
	free(itoa_result);
}

void	print_number(char *c_num, char *buffer)
{
	int		len;

	len = ft_strlen(c_num);
	if (len == 1)
		print_units(c_num, buffer);
	else if (len == 2)
	{
		print_decs(c_num, buffer);
	}
}
