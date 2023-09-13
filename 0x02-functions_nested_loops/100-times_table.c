#include"main.h"
/**
 * print_times_table - function
 * Description:'This simple program is just to print the mul table of n+1'
 *@n:the last number to get the mul
 * Return:void
 */
void print_times_table(int n)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
printf("%d", (i * j));
if (j != n)
{
if (i * (j + 1) > 99)
{
printf(", ");
}
else if (i * (j + 1) > 9)
{
printf(",  ");
}
else
{
printf(",   ");
}
}
}
putchar('\n');
}
}
