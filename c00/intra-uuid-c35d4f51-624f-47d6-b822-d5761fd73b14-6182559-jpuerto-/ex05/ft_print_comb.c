/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:48:50 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/11 09:48:55 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	do_write(char fst, char scd, char thd)
{
	write (1, &fst, 1);
	write (1, &scd, 1);
	write (1, &thd, 1);
	if (fst != '7' || scd != '8' || thd != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	fst;
	char	scd;
	char	thd;

	fst = '0';
	while (fst <= '7')
	{
		scd = fst + 1;
		while (scd <= '8')
		{
			thd = scd + 1;
			while (thd <= '9')
			{
				do_write(fst, scd, thd);
				thd++;
			}
			scd++;
		}
		fst++;
	}
}
