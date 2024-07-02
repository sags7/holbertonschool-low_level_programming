/**
 * set_string- sets the value of a pointer to a char
 * @s: the pointer to send to to
 * @to: the pointer wheree s will live
 */
void set_string(char **s, char *to)
{
	*s = to;
}
