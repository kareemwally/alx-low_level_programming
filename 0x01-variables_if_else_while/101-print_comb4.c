#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program is to print a pattern of unduplicate 3 digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
for (k = j + 1; k <= 57; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (k == 57 && j == 56 && i == 55)
break;
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
