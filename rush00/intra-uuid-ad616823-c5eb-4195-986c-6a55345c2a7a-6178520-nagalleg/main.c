/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:10:33 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/22 15:04:09 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int max_x, int max_y);


int	arrtoint(char *str)
{
	int	result;
	int i;

	i = 0;
	result = 0;

	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}

	return result;

	
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3) 
    {
        printf("Usage: %s <width> <height>\n", argv[0]);
        return 1;
    }

    int max_x = arrtoint(argv[1]); 
    int max_y = arrtoint(argv[2]); 

    rush(max_x, max_y); 

    return 0;
}

