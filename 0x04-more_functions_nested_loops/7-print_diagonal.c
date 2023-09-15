#include"main.h"
/**
 * print_diagonal - Function
 * Description:'This program is to print diagonal line '
 * @n:the number of( ) in last line
 * Return:void (prints digits)
 */
void print_diagonal(int n)
{
int i, j = n;
while (n > 0)
{
n--;
for (i = n; (i < j) ; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
