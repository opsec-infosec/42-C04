#include <unistd.h>
#include <stdio.h>
#include "../ex01/ft_putstr.c"

void ft_putstr(char *str);

int main(void) {

	printf("Calling ft_putstr(\"AbuDhabi-42\");\n"); 
	ft_putstr("AbuDhabi-42");

    return (0);
}

