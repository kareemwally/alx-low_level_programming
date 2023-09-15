#include"main.h"
/**
 * print_triangle - Function
 * Description:'This program is to print triangle'
 * @size:the length square in last line
 * Return:void (prints digits)
 */
void print_triangle(int size)
{
int i, j, n = size;
if (size > 0)
{
while (size > 0)
{
for (i = 0; i < size - 1; i++)
{
_putchar(' ');
}
for (j = n; j > i; j--)
{
_putchar('#');
}
_putchar('\n');
size--;
}
}
else
_putchar('\n');
}
