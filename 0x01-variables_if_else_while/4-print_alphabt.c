#include<stdio.h>

/**
* main - Entry
* Description: print all aplhabet letters except q and e
* Return: Always zero
*/

int main(void)
{
char caz = 'a';

while (caz <= 'z')
{
if (caz == 'e' || caz == 'q')
++caz;
putchar(caz);
++caz;
}
putchar('\n');
return (0);
}
