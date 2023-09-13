#include"main.h"
/**
 * print_sign - function
 *
 * Description:'This program is to checks positivity of a number'
 * @n:the character we want to check
 * Return:1 if n(positive) or -1 if n(negative) or 0 anything else
 */
int print_sign(int n)
{
int r;
if (n > 0)
{
r = 1;
putchar(43);
}
if (n < 0)
{
r = -1;
putchar(45);
}
if (n == 0)
{
r = 0;
putchar(48);
}
return (r);
}
