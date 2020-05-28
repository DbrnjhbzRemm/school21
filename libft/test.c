#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HELLO_STRING "Hello, Habr!\n"

size_t	ft_strlen(const char *s);

void	main()
{
	char *str = malloc(sizeof(char) * ft_strlen(HELLO_STRING));
	strcpy(str, HELLO_STRING);
	printf("->\t%s", str);
	free(str);
}
