/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:49:18 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/11 10:39:38 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int a, int b, int c, int d)
{
	char	a_char;
	char	b_char;
	char	c_char;
	char	d_char;

	a_char = a + '0';
	b_char = b + '0';
	c_char = c + '0';
	d_char = d + '0';
	write(1, &a_char, 1);
	write(1, &b_char, 1);
	write(1, " ", 1);
	write(1, &c_char, 1);
	write(1, &d_char, 1);
}

void	print_comma(int count)
{
	if (count != 9899)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	count;

	count = 0;
	while (count <= 9999)
	{
		a = count / 1000;
		b = (count / 100) % 10;
		c = (count / 10) % 10;
		d = count % 10;
		if (a * 10 + b < c * 10 + d)
		{
			print_numbers(a, b, c, d);
			print_comma(count);
		}
		count++;
	}
}
