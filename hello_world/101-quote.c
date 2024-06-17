#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
*main- the programs entry point
*Return: always returns 0
*/
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDOUT_FILENO, message, strlen(message));
return (0);
}
