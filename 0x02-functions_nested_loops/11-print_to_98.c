#include"main.h"
/**
 * print_to_98 - function
 *
 * Description:'This simple program is just to print the numbers 98:n and vice versa'
 *@n:the number to start printing
 * Return:void (summation)
 */
void print_to_98(int n)
{
if (n > 97)
while (n >= 98)
{
printf("%d",n);
if (n != 98)
printf(", ");
n--;
}
else
while (n < 99)
{
printf("%d",n);
if (n != 98)
printf(", ");
n++;
}
}
