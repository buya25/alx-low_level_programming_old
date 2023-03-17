#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the alphabet without q and e.
 *
 * Return: 0 Success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
