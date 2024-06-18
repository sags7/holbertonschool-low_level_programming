#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
* main- program entry point
* Return: program always returns 0
*/
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
n < 0 ? lastDigit = -(n % 10) : n % 10;
if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit == 0)
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
else if (lastDigit < 6 && lastDigit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
return (0);
}
