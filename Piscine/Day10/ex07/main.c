#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);

int main(int argc, char **argv)
{
	char	**tab;
	int		i = 0;

	if (argc < 2)
		return (0);
	tab = ft_split_whitespaces(argv[1]);
	ft_sort_wordtab(tab);
	while (tab[i])
	{
		printf("%s\n",tab[i]);
		i++;
	}
	return (0);
}