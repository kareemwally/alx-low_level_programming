#include "variadic_functions.h"
/**
 *print_all-funcction
 *description:this function prints whatever type
 *@format:pointer to the data type to print
 *Return:(void)
 */
void print_all(const char * const format, ...)
{
size_t i = 0;
char g;
char *f;
va_list res;
va_start(res, format);
while (i <  strlen(format))
{
g = format[i];
switch (g)
{
case 'i':
printf("%d", va_arg(res, int));
break;
case 'f':
printf("%f", va_arg(res, double));
break;
case 'c':
printf("%c", va_arg(res, int));
break;
case 's':
f =  va_arg(res, char *);
printf("%s",f);
break;
}
if (i != strlen(format) - 1)
{
printf(", ");
}
i++;
}
va_end(res);
printf("\n");
}
