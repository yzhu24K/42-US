#include <stdlib.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))

void	aux(int n, int b, char *rst, int *p)
{
	char	base[] = "0123456789ABCDEF";

	if (n <= -b || b <= n)
		aux(n / b, b, rst, p);
	rst[(*p)++] = base[ABS(n % b)];
}

char	*ft_itoa_base(int value, int base)
{
	char	*rst;
	int		p;

	if (base < 2 || 16 < base
		|| !(rst = (char *)malloc(sizeof(char) * 35)))
		return (NULL);
	p = 0;
	if (base == 10 && value < 0)
		ans[p++] = '-';
	aux(value, base, rst, &p);
	rst[p] = '\0';
	return (rst);
}
