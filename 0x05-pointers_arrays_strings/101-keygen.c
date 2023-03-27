#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - entrance into programme
 * Descriptio - generate pd
 * Return: zero
 */

int main(void)
{
	int x = 2772, i = 0, j, r;
	char pd[100];
	time_t t;

	srand((int) time(&t));
	while (x > 78)
	{
		r = rand() % 28;
		pd[i] = r;
		x -= r;
		i++;
	}
	if (x > 0)
		pd[i] = x;
	else
	{
		i--;
	}
	

	for (j = 0; j <= i; j++)
	{
		printf("%c", pd[j]);
	}
	return (0);
}
