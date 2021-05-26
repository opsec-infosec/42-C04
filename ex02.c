#include "../ex02/ft_putnbr.c"
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("Test Numbers: 0,32700,-32700,-2147483648,42,-42\n");
	printf("Expected Output: 0,32700,-32700,-2147483648,42,-42\n");
	printf("Calling ft_putnbr()\n");

	ft_putnbr(0);
	printf("\n");
	ft_putnbr(32700);
	printf("\n");
	ft_putnbr(-32700);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	return 0;
}