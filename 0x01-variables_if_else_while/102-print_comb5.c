#include <stdio.h>

/**
* main - Entry Point
* Description: Write a program that prints all possible combinations
* Return: 0
*/

int main(void)
{
int fdx = 0, sdx;
while (fdx <= 99)
{
sdx = fdx;
while (sdx <= 99)
{
if (sdx != fdx)
{
putchar((fdx / 10) + 48);
putchar((fdx % 10) + 48);
putchar(' ');
putchar((sdx / 10) + 48);
putchar((sdx % 10) + 48);
if (fdx != 98 || sdx != 99)
{
putchar(',');
putchar(' ');
}
}
++sdx;
}
++fdx;
}
putchar('\n');
return (0);
}
