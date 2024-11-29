/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:29:32 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/21 15:34:27 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	check_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

int	validate_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
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

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	base_len;
	int	i;
	int	sign;
	int	index;

	i = 0;
	result = 0;
	if (!str || !base || !validate_base(base))
		return (0);
	base_len = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	sign = check_sign(str, &i);
	index = get_index(str[i], base);
	while (index != -1)
	{
		result = result * base_len + index;
		i++;
		index = get_index(str[i], base);
	}
	return (result * sign);
}
// #include <stdio.h>
// #include <limits.h>
// int	ft_atoi_base(char *nbr, char *base);
// 	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
// 	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
// 	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-g", "0123456789abcdef"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
// 	res = ft_atoi_base(" \v7fffffff", "0123456789abcdef");
// 	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);
// 	res = ft_atoi_base(" \f-80000000", "0123456789abcdef");
// 	printf("%d : %d (equals: %i)\n", INT_MIN, res, INT_MIN == res)
// 	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);
// 	res = ft_atoi_base("-~~~~~~~~'~~~~~~'~'~~~'''''''~~'$", "'~");
// 	expected = -2143247366;
// 	printf("%d : %d (equals: %i)\n", expected, res, expected == res);
// }
