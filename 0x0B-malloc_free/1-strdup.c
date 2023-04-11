#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success)
 */
char *_strdup(char *str)
{
	char *up;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	up = malloc(sizeof(char) * (len + 1));

	if (up == NULL)
		return (NULL);

	while ((up[i] = str[i]) != '\0')
		i++;
	return (up);
}
