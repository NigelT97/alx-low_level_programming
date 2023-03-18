#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry
* after operation decide last digit category
* Return: always zero
*/
int main(void)
{
int n, Last_Digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
Last_Digit = n % 10;
if (Last_Digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, Last_Digit);
else if (Last_Digit == 0)
printf("Last digit of %d is %d and is 0\n", n, Last_Digit);
else if (Last_Digit < 6 && Last_Digit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_Digit);
return (0);
}
