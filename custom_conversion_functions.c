#include <stdlib.h>
#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 *_puts - print string
 *Description: print some string
 *@str: pointer char
 *Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}


char *convert_to(char representation[], unsigned int num, int base)
{
	char *ptr;
	static char buffer[128];
	int mod = 0;

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		mod = num % base;
		*--ptr = representation[mod];
		num /= base;
	} while (num != 0);
	return (ptr);
}
