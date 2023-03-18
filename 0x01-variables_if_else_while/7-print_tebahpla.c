#include<stdio.h>

/**
* main - Entry point
* Description: print a-z in reverse
* Return: Always zero
*/

int main(void)
{
char ra = 'z';

while (ra >= 'a')
{
putchar(ra);
--ra;
}
putchar('\n');
return (0);
}
