#include "main.h"

/**
 * print_string - loops through a string and prints every character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list 1, flags_t *f)
{
	char *s = va_arg(1, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list 1, flags_t *f)
{
	(void)f;
	_putchar(va_arg(1, int));
	return (1);
}
