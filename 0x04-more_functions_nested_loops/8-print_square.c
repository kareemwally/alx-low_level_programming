#include"main.h"
/**
 * print_square - Function
 * Description:'This program is to print square of n*n'
 * @size:the length square in last line
 * Return:void (prints digits)
 */
void print_square(int size)
{
int i, j = size;

if (size > 0)
{
while (size > 0)
{
for (i = 0; i < j ; i++)
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
