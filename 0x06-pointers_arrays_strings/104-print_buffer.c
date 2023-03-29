#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer
 * @b: buffer to print
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= ' ' && b[i + j] <= '~')
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
