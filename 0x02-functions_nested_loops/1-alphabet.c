#include "main.h"
/**
 * main - entrance
 * print_alphabet from a to z
 * Return: zero
 */
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet -  for calling out a toz printing
 */
void print_alphabet(void)
{
int l;
for (l =  'a' ; l <= 'z' ; ++l)
putchar(l);
putchar('\n');
}
