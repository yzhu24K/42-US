#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int		main()
{
	int size = 7;
	int a[size];
	a[0] = 1;
	a[1] = 5;
	a[2] = 6;
	a[3] = 0;
	a[4] = -10;
	a[5] = 6;
	a[6] = -1;
	
	ft_sort_integer_table(a, size);

	int i;
	for (i = 0; i < size; i++)
		printf("[%i] : %i.\n", i, a[i]);

	return (0);
}
