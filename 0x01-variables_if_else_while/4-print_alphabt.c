#include <stdio.h>

/**
 *main- main entry
 *return 0 = success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
