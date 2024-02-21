#include "variadic_functions.h"
/**
 *print_strings-function
 *description:this function puts separator between words
 *@separator:the string separating words
 *@n:the number of strings
 *Return:(void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list res;
va_start(res, n);
for (i = 0; i < n; i++)
{
s = va_arg(res, char *);
if (s)
{
printf("%s", s);
}
else
{
printf("(nil)");
}
if (i != n - 1)
{
if (separator != (char *)NULL)
{
printf("%s", separator);
}
}
}
va_end(res);
printf("\n");
}
