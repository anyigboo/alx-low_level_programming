#include <stdio.h>

/**
 *main - the program entry point.
 *return - a zero if no error, non-zero if error.
 **/
int main(void)
/*return - a zero if no error, non-zero if error.*/
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}