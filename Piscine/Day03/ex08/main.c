#include <stdio.h>

int		ft_atoi(char *str);

int		main()
{
	char a[] = "-123456789";
	char b[] = "+vniugner";
	char c[] = "+5237832659832";
	char d[] = "   --43287932";
	char e[] = "   ++4237432894";
	printf("-123456789 is :%i.\n", ft_atoi(a));
	printf("b is :%i.\n", ft_atoi(b));
	printf("c is :%i.\n", ft_atoi(c));
	printf("c is :%i.\n", ft_atoi(d));
	printf("d is :%i.\n", ft_atoi(e));
	printf("result: %d (should be -2147483648)\n", ft_atoi("-2147483648"));
	return (0);
}
