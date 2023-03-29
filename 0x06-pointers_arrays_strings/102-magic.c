#include <stdio.h>

/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{

int n, *p;
int a[5];
a[2] = 1024;
p = &n;
  /*
   * - you are not allowed to use a and to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
*(p + 5) = 98;
  /*...so that this prints 98\n*/
printf("a[2] = %d\n", a[2]);
return (0);
}
