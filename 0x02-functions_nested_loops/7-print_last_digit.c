#include"main.h"
/**
 * print_last_digit - function
 *
 * Description:'This program is to return the last digit of a n'
 * @n:the number we want to check
 * Return:the last digit of n
 */
int print_last_digit(int n)
{
int r;
if (n < 0)
r = -1 * (n % 10);
else
r = n % 10;
_putchar('0' + r);
return (r);
}
