#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a = 0;
	int b = 0;
	ft_div_mod(7, 3, &a, &b);
	printf("div is:%i.\nmod is:%i.\n", a, b);
	return (0);
}
