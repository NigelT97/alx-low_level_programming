#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entrance into programme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pd[100];
	int i, x, n;

	x = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pd[i] = rand() % 78;
		x += (pd[i] + '0');
		putchar(pd[i] + '0');
		if ((2772 - x) - '0' < 78)
		{
			n = 2772 - x - '0';
			x += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
