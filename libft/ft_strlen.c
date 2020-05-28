//#include <stdio.h>
//#include <unistd.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(*s)
	{
		i++;
//		write(1, s, 1);
		s++;
	}
	return (i);
}
//void	main()
//{
//	printf("%ld", ft_strlen("Hello, Habr"));
//}
