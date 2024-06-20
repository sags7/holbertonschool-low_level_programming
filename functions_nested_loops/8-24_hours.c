#include <stdio.h>
/**
 * jack_bauer- prints every minute of the day to std output
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
			printf("%d:%d\n", h, m);
	}
}
