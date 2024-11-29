/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:50:23 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/18 15:19:22 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive_function(int nb)
{
	char	num_char;
	int		num;

	num = nb;
	if (num / 10 != 0)
	{
		recursive_function(num / 10);
	}
	num_char = '0' + nb % 10;
	write(1, &num_char, 1);
}

void	ft_putnbr(int nb)
{
	int	aux;

	aux = nb;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	recursive_function(nb);
}
