/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:45:02 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/12 17:30:05 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a / *b;
	aux_b = *a % *b;
	*a = aux_a;
	*b = aux_b;
}
/*
int	main()
{
	int a = 120;
	int b = 100;

	int *a_ptr = &a;
	int *b_ptr = &b;

	ft_ultimate_div_mod(a_ptr, b_ptr);

	printf("%d",a);
	printf("\n");
	printf("%d",b);
	return 0;
}
*/
