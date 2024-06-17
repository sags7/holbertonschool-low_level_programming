#include <stdio.h>
#include <unistd.h>
/**
*main- the programs entry point
*Return: always returns 0
*/
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, message, 60);
return (0);
}
