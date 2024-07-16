/**
 * print_name - takes a string and passes it to another function
 * that implements the acutal printing of the name
 * @name: the name of the person
 * @f: callback that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
