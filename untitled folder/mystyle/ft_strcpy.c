#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*rs;

	s1 = "njf";
	s2 = "nim";

	rs = ft_strcpy(s1, s2);
	printf("copy is %s\n", rs);
}

//bus error
