#include <stdio.h>

/**
* main - Entry
* Description: print alphabet in lowercase then in uppercase
* Return: Always ZERO
*/
int main(void)
{
char LC = 'a';
char UC = 'A';
while (LC <= 'z')
{
putchar(LC);
++LC;
}
while (UC <= 'Z')
{
putchar(UC);
++UC;
}
putchar('\n');
return (0);
}
