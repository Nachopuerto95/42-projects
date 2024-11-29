/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:45:20 by jpuerto-          #+#    #+#             */
/*   Updated: 2024/11/15 10:53:55 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_in_word(int *out, int i, char *str)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
	}
	else if (!(str[i] >= 'a' && str[i] <= 'z')
		&& !(str[i] >= 'A' && str[i] <= 'Z')
		&& !(str[i] >= '0' && str[i] <= '9'))
	{
		*out = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	out;

	out = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (out)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				out = 0;
			}
			else if ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'))
				out = 0;
		}
		else
		{
			ft_in_word(&out, i, str);
		}
		i++;
	}
	return (str);
}
