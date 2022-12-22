#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)

{	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit */
	{
		for (ones = '0'; ones <= '9'; ones++)/*prints ones digits */
		{
			if (!((ones == tens) || (tens > ones)))/* eliminates repitition */
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* adds comma and a space */


					putchar(',');
					putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
