/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:20:46 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/24 20:56:18 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	arrtoint(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
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

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	sign = check_sign(str, &i);
	output = arrtoint(&str[i]);
	return (output * sign);
}
