#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: To Print
 *
 * Return: On Succes 1.
 * On error, -1 returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
