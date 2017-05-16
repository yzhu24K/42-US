#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
char	**ft_split_whitespaces(char *str);
/*
int		ft_strcmp(char *s1, char *s2)
{
	int	cmp;
	int i;

	i = 0;
	cmp = 0;
	while (1 == 1)
	{
		cmp += (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (cmp);
		if (s1[i] == s2[i])
			i++;
		else
			return (cmp);
	}
}
*/

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	char	**tab;
	int		i = 0;

	if (argc < 2)
		return (0);
	tab = ft_split_whitespaces(argv[1]);
	ft_advanced_sort_wordtab(tab, &ft_strcmp);
	while (tab[i])
	{
		printf("%s\n",tab[i]);
		i++;
	}
	return (0);
}