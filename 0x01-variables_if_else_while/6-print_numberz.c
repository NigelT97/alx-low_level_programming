#include<stdio.h>

/**
* main - Entry point
* Description: print 0-9 using putchar
* Return: Always zero
*/

int main(void)
{
int dx = 0;

while (dx <= 9)
{
putchar(dx + '0');
++dx;
}
putchar('\n');
return (0);
}
