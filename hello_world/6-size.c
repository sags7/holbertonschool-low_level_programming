#include <stdio.h>
/**
 *main- program entry point
 *Return: program always returns 0
 */
int main(void)
{
printf("Size of a char: %c byte(s)", sizeof(char));
printf("Size of an int: %c byte(s)", sizeof(int));
printf("Size of a long int: %c byte(s)", sizeof(long));
printf("Size of a long long int: %c bytes(s)", sizeof(long double));
printf("Size of a float: %c byte(s)", sizeof(float));
return (0);
}
