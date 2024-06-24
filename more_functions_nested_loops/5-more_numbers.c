#include "main.h"
/**
 * more_numbers- prints the bumbers form 0 to 14, followed by a new line
 * ten times.
 */
void more_numbers(void)
{
	int tens = 1, units = 0, reps = 0;

	for (reps = 0; reps < 10; reps++)
	{
		for (tens = 0; tens <= 1; tens++)
		{
			for (units = 0; units < 10; units++)
			{
				if(tens > 0 && units > 4)
					break;
				if (tens != 0)
					_putchar('0' + tens);
				_putchar('0' + units);
			}
		}
		_putchar('\n');
	}
}
