

int		check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}


char **ft_split(char *str, char *charset)
{
	int i;
	int words;
	char **result;
	words = 0;
	i = 0;
	
	while (str[i] != '\0')
	{
		if (check_charset(str[i + 1], charset))
		{
			words++;
		}
	}
	result = (char **)malloc(sizeof(char * ));
}
#include <stdio.h>
int main()
{
	return 0;
}