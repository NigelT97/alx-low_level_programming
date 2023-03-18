#include <stdio.h>

/**
* main - Entry point
* Description: print 0, 1, - 9
* Return: Always 0 (Success)
*/

int main(void)
{
int dx = 0;
while (dx <= 9)
{
putchar(dx + 48);
if (dx != 9)
{
putchar(',');
putchar(' ');
}
++dx;
}
putchar('\n');
return (0);
}
