#include <stdio.h>

/**
 * main- main entry
 * return 0= success
 */

int main(void)
{
	char c;
	for(c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return 0;
}
