#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(void)
{
	int		i;

	i = ft_strlen("dsufhuyfvneuriveu");
	printf("%d", i);

}
