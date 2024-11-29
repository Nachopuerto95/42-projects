/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:50:23 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/21 14:40:55 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive_function(int nb)
{
	char	num_char;

	if (nb / 10 != 0)
	{
		recursive_function(nb / 10);
	}
	num_char = '0' + nb % 10;
	write(1, &num_char, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	recursive_function(nb);
}
// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <limits.h>

// void	ft_putnbr(int nb);

// int main() {
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(10);
// 	write(1, "\n", 1);
// 	ft_putnbr(-10);
// 	write(1, "\n", 1);
// 	ft_putnbr(INT_MAX);
// 	write(1, "\n", 1);
// 	ft_putnbr(INT_MIN);
// 	write(1, "\n", 1);
// }