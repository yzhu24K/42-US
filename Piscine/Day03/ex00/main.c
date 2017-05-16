#include <stdio.h>

void ft_ft(int *nbr);

int		main()
{
	int src = 1;
	ft_ft(&src);
	printf("result is: %i.\n", src);
	return (0);
}
