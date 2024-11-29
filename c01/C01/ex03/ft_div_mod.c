/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:32:44 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/12 17:21:24 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a = 120;
	int b = 100;

	int i;
	int j;

	int *i_ptr = &i;
	int *j_ptr = &j;
	ft_div_mod(a, b, i_ptr, j_ptr);

	printf("%d", i);
	printf("\n");
	printf("%d", j);
	return 0;
}
*/
