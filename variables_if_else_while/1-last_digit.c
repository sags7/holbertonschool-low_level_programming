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
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
printf("Last digit of %u is %u and is greater than 5\n", n, n % 10);
else if (n % 10 == 0)
printf("Last digit of %u is %u and is 0\n", n, n % 10);
else if (n % 10 < 6 && n % 10 != 0)
printf("Last digit of %u is %u and is less than 6 and not 0", n, n % 10);
return (0);
}
