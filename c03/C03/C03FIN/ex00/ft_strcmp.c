/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:09:20 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/23 19:26:36 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}	
	result = s1[i] - s2[i];
	return (result);
}
#include <stdio.h>
int main (int argc, char **argv)
{
	printf("%d", ft_strcmp(argv[1], argv[3]));
	return 0;
}