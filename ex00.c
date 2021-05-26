#include <unistd.h>
#include <stdio.h>
#include "../ex00/ft_strlen.c"

int ft_strlen(char *str);

int main(void) {

	printf("Calling ft_strlen(\"123456789\");\n"); 
	printf("String Length: %d \n", ft_strlen("123456789"));

    return (0);
}

