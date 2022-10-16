#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
 * Main: Program entry point
 * Return: 0 IF NO ERROR, NON-ZERO IF ERROR
 *
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
					{
						printf("%d is positive\n", n);
					}
					else if (n < 0)
					{
						printf("%d is negative\n", n);
					}
					else if (n == 0)
					{
						printf("%d is zero\n", n);
					}
					return (0);
}
