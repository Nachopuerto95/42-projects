	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   rush04.c                                           :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: jpuerto- <marvin@42.fr>                    +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2024/11/09 20:09:22 by jpuerto-          #+#    #+#             */
	/*   Updated: 2024/11/10 12:35:17 by jpuerto-         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

	#include <unistd.h> 

	void ft_putchar(char a);

	void print_line( int max_x, char left, char mid, char right )
	{
		int pos_x = 1;
		ft_putchar(left);
		while (pos_x < max_x - 1  )
		{
			ft_putchar(mid);
			pos_x++;	
		}
		if (max_x != 1)
		{
			ft_putchar(right);
		}	
		ft_putchar('\n');
	}

	void rush(int max_x, int max_y) 
	{
		int pos_y = 1;	
		
		if (max_x < 1 || max_y < 1)
		{
			write(1, "Both numbers must be higer than 0\n", 34);
			return;
		}
		while(pos_y <= max_y)
		{
			if (pos_y == 1) 
			{
				print_line(max_x, 'A', 'B', 'C');
			} 
			else if(pos_y == max_y )
			{	
				print_line(max_x, 'C', 'B', 'A');
			}
			else	
			{
				print_line(max_x, 'B', ' ', 'B');
			}
		pos_y++;
		}
	}

