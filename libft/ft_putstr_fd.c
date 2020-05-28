#include <stdio.h>

size_t	ft_strlen(const char *s);

void	ft_putstr_fd(char *s, int fd)
{
	if (s)	
		write(fd, &s, ft_strlen(s));
}

void	main()
{
	ft_putstr_fd("Hello", 1);
}
