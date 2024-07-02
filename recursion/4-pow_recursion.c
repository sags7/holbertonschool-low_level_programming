/**
 * _pow_recursion- returns x to the power of y and -1 if y < 0
 * @x: the base
 * @y: the power
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
