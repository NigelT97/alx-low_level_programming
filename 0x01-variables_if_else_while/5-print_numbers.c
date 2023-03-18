#include<stdio.h>

/**
* main - Entry
* Description: print all single digit numbers
* Return: Always zero
*/

int main(void)
{
int dx = 0;
while (dx <= 9)
{
printf("%d", dx);
++dx;
}
printf("\n");
return (0);
}
