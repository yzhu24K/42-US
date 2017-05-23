#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_ascii(unsigned char c)
{
	if (c > 31 && c < 127)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void	put_hex(unsigned char c)
{
	char tab[16] = "0123456789abcdef";
	
	ft_putchar(tab[c / 16]);
	ft_putchar(tab[c % 16]);
}

void	put_line(unsigned char *str, size_t start, size_t max)
{
	size_t	i;

	i = start;
	while (i < start + 16 && i < max)
	{
		put_hex(str[i]);
		if (i % 2)
			ft_putchar(' ');
		i++;
	}
	while (i < start + 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (i % 2)
			ft_putchar(' ');
		i++;
	}
	i = start;
	while (i < start + 16 && i < max)
	{
		put_ascii(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		put_line(str, i, size);
		i += 16;
	}
}
