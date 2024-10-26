#include <stdio.h>
#include "ft_printf.h" // Incluye tu archivo de cabecera para ft_printf

void run_tests(int use_ft_printf)
{
	int a = 42;
	unsigned int b = 4294967295;
	char c = 'A';
	char *str = "Hello, world!";
	void *ptr = &a;
	int (*my_printf)(const char *, ...) = use_ft_printf ? ft_printf : printf;
	int ret; // Variable para almacenar el valor de retorno

	// Pruebas válidas


	ret = my_printf("Test 12: Simbolo del porcentaje: %%\n");
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 1: Char: %c\n", c);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 2: String: %s\n", str);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 3: Decimal: %d\n", a);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 4: Unsigned: %u\n", b);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 5: Hexadecimal (minúscula): %x\n", b);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 6: Hexadecimal (mayúscula): %X\n", b);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 7: Pointer: %p\n", ptr);
	my_printf(" -> Retorno: %d\n", ret);

	// Pruebas con formatos inválidos o desconocidos
	ret = my_printf("Test 8: Formato inválido: %y\n", a);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 9: Formato de combinación desconocida: %k %c\n", a, c);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 10: Cadena vacía y formato no soportado: %!\n");
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 11: String nula: %s\n", NULL);
	my_printf(" -> Retorno: %d\n", ret);

	ret = my_printf("Test 12: Cadena vacía y formato no soportado: %! hola\n");
	my_printf(" -> Retorno: %d\n", ret);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		run_tests(1);
	else
		run_tests(0);
	return 0;
}
