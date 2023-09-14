#include"main.h"
/**
 * print_most_numbers - Function
 *
 * Description:'This program is to print digits but 2 ,4'
 *
 * Return:void (prints digits)
 */
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
{
continue;
}
_putchar(i);
}
}
