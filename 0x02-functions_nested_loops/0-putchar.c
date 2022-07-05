#include <holberton.h>

/**
 * it is about writing a text
 *
 */
int main(void)
{
	char *sh = "Holberton";
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

