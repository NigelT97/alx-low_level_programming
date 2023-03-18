#include <stdio.h>

/**
 * main - entry
 * Description: print all aplhabet letters in low cases
 * Return: Always zero
*/

int main(void)
{
char cz = 'a';
while (cz <= 'z')
{
putchar(cz);
++cz;
}
putchar('\n');
return (0);
}
