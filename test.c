#include "ft_printf.h"
#include <stdio.h>

int	main (void)
{
	int	nbr = 42;
	int *prt = 0;

	ft_printf("mine: %d, %x, %p", 12, 89890, prt);
	printf("\noriginal: %d, %x, %p\n", 12, 89890, prt);
}
