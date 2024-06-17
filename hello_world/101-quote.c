#include <stdio.h>
#include <unistd.h>
/**
*main- the program writes a message to the std error
*Return: always returns 0
*/
int main(void)
{
char message[] =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 59);
return (1);
}
