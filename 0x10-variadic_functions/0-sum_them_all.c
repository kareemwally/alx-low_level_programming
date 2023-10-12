#include "variadic_functions.h"
/**
 *sum_them_all-function
 *description:this function sums all elements
 *@n:the number of undefined numbers
 *Return:(int)
 */
int sum_them_all(const unsigned int n, ...)
{
va_list res;
unsigned int i;
int s = 0;
va_start(res, n);
if ( n!= 0)
{
for (i = 0; i < n; i++)
{
s += va_arg(res, unsigned int);
}
va_end(res);
return (s);
}
else
return (0);
}
