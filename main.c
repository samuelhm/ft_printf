#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		rslt;
	int		rslt2;

	rslt = printf("%x\n", -10);
	printf ("%d\n", rslt);
	rslt2 = ft_printf("%x\n", -10);
	ft_printf("%d\n", rslt2);
	return (0);
}
