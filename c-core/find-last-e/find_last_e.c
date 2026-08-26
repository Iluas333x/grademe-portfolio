#include <unistd.h>

int	main(int argc, char **argv)
{
	char	s;
	int		i;

	if (argc != 2)
	{
		write(1, "e\n", 2);
		return (0);
	}
	s = 0;
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 'e')
			s = 'e';
		i++;
	}
	if (s == 'e')
		write(1, "e", 1);
	write(1, "\n", 1);
	return (0);
}