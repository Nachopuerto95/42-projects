/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:45:03 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/23 18:46:20 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_is_prime(8));
// 	return 0;
// }
