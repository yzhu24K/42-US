#include <unistd.h>

int		main(int argc, char **argv)
{
	(void)argv;
	if (argc <= 2)
		write (1, "a", 1);
	write (1, "\n", 1);
	return (0);
}
