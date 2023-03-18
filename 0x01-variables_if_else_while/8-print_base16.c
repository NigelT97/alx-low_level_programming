#include <stdio.h>

/**
* main - Entry
* Description: print numbers of base16 in lowercase
* Return: Always zero
*/

int main(void)
{
int dx = 48;
while (dx <= 102)
{
putchar(dx);
if (dx == 57)
dx += 39;
++dx;
}
putchar('\n');
return (0);
}
