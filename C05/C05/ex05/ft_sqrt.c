/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:43:47 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/23 18:45:33 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i != nb)
	{
		i++;
		if (i * i > nb)
			return (0);
	}
	return (i);
}
// int main()
// {
// 	printf("%d\n", ft_sqrt(144));
// 	printf("%d\n", ft_sqrt(1));
// 	return 0;
// }
