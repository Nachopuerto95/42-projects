/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:20:46 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/24 20:59:21 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int number)
{
	int		temp_number;
	int		length;
	char	*result;

	temp_number = number;
	length = 0;
	while (temp_number != 0)
	{
		temp_number /= 10;
		length++;
	}
	result = (char *) malloc((length + 1) * sizeof(char));
	result[length] = '\0';
	while (length > 0)
	{
		length--;
		result[length] = (number % 10) + '0';
		number /= 10;
	}
	return (result);
}
