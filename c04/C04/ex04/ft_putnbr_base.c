/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:26:24 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/21 14:23:28 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr(int nbr, int base_len, char *base)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return ;
	if (nbr > 0)
	{
		ft_print_nbr(nbr / base_len, base_len, base);
	}
	write(1, &base[nbr % base_len], 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
		|| base[i] == '\r' || base[i] == '\t' || base[i] == '\v')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	if (!check_base(base))
		return ;
	while (base[base_len] != '\0')
	{
		base_len++;
	}
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_print_nbr(-(nbr / base_len), base_len, base);
		write(1, &base[-(nbr % base_len)], 1);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	else if (nbr == 0)
		write(1, &base[0], 1);
	ft_print_nbr(nbr, base_len, base);
}
// #include <unistd.h>
// #include <limits.h>

// int		main(void)
// {
// 	write(1, "42:", 3);
// 	ft_putnbr_base(42, "0123456789");
// 	write(1, "\n2a:", 4);
// 	ft_putnbr_base(42, "0123456789abcdef");
// 	write(1, "\n-2a:", 5);
// 	ft_putnbr_base(-42, "0123456789abcdef");
// 	write(1, "\n0:", 3);
// 	ft_putnbr_base(0, "0123456789abcdef");
// 	write(1, "\nINT_MAX:", 9);
// 	ft_putnbr_base(INT_MAX, "0123456789abcdef");
// 	write(1, "\nINT_MAX:", 9);
// 	ft_putnbr_base(INT_MIN, "0123456789abcdef");
// 	write(1, "\n-2143247366 : ", 15);
// 	ft_putnbr_base(INT_MIN + 4236282, "'~");
// 	write(1, "\n-1:", 4);
// 	ft_putnbr_base(-1, "0123456789abcdef");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "0");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "+-0123456789abcdef");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "\v0123456789abcdef");
// }