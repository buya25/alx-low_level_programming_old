#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: a pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, sum, carry;

	/* get the length of the strings */
	for (l1 = 0; n1[l1] != '\0'; l1++)
		;
	for (l2 = 0; n2[l2] != '\0'; l2++)
		;
	/* add digits starting from the least significant position */
	carry = 0;
	for (i = l1 - 1, j = l2 - 1, k = 0;
			i >= 0 || j >= 0 || carry > 0;
			i--, j--, k++)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (k >= size_r - 1)
			return (0);
		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}
	r[k] = '\0';
	/* reverse the string */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}
	return (r);
}
