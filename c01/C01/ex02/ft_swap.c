/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:03:10 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/12 17:06:11 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int	main()
{
	int a = 4;
	int b = 2;

	int *ptra = &a;
	int *ptrb = &b;
		
	ft_swap(ptra, ptrb);

	printf("%d", a);
	printf("%d", b);
	return 0;
}
*/
