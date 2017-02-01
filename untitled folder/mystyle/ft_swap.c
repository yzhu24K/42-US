#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int		a;
	int		b;

	a = 5;
	b = 1;
	ft_swap(&a, &b);
	printf("%d,%d\n",a, b);
}
