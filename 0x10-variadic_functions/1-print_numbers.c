#include "variadic_functions.h"
/**
 *print_numbers-function
 *description:this function prints numbers in a specific pattern
 *@separator:char pointer to the splitting char
 *@n:number of elements
 *Return:(void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list res;
(void)res;
(void)i;
va_start(res, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(res, int));
if (i != n - 1)
{
if (separator != (char *)NULL)
{
printf("%s", separator);
}
printf(" ");
}
}
va_end(res);
printf("\n");
}
