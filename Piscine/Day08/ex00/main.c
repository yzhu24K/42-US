#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define N printf("%c\n", '\n')
#define PRINT(x) for(; *x!=0; x++) printf("result is %s.\n", *x) 


char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char **a = ft_split_whitespaces("   dsfnuw   fwf   ");
	char **b = ft_split_whitespaces("\n \t\t  \n  ");
	char **c = ft_split_whitespaces("      a        abc      xyz     ");
	char **d = ft_split_whitespaces("\ndg dfew\tgrw  n  ");
	char **e = ft_split_whitespaces(" a a a a");

	PRINT(a);
	N;
	PRINT(b);
	N;
	PRINT(c);
	N;
	PRINT(d);
	N;
	PRINT(e);
	return (0);
}
