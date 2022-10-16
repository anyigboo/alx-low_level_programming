#include <stdio.h>
/**
 * Main: Program entry point.
 * Return:0 if no error, non-zero if error.
 */
int main(void)
{
	int i;
	char hexadecimal_values[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexadecimal_values[i]);
	}
	putchar('\n');
	return (0);
}
