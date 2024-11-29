#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int validate_args(char **argv, int index)
{
	int i;

	i = 0;
		while (argv[index][i] != '\0')
		{
			if (argv[index][i] < '0' || argv[index][i] > '9')
			{
				return (0);
			}
			i++;
		}
	return (1);
}

int	main(int argc, char **argv)
{
	int dict = open("numbers.dict", O_RDONLY);
	char buffer[2048];
	int bytesRead;
	int i;

	if (dict == -1) 
    {
		perror("Dict error");
    	return 1;
	}

	if (argc == 2 && !validate_args(argv, 1))
	{
		write(1,"Error\n",6);
		return (1);
	}
	else if (argc == 3 && !validate_args(argv, 2))
	{
		write(1,"Error\n",6);
		return (1);
	}
	else if (argc > 3)
	{
		write(1,"Error\n",6);
		return (1);
	}
	
    bytesRead = read(dict, buffer, sizeof(buffer) - 1);
    if (bytesRead == -1)
    {
        printf("%s", "Read error");
        close(dict);
        return (1);
    }
    buffer[bytesRead] = '\0';
    i = 0;
    while (buffer[i] != '\0')
    {
        write(1, &buffer[i], 1);
        i++;
    }

    close(dict);
}