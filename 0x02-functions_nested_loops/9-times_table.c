#include"main.h"
/**
 * times_table - function
 *
 * Description:'This program is to print the full multiplication table 0:9'
 *
 * Return:Void it just prints the table
 */
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
printf("%d", (i * j));
if (j != 9)
{
if (i * (j + 1) > 9)
{
printf(", ");
}
else
printf(",  ");
}
}
putchar('\n');
}
}
