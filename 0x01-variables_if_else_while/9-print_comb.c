#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the idea is to convert the ascii code in the putchar function'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, o;
for (i = 48; i <= 57; i++)
{
o = putchar(i) + putchar(44) + putchar(32);
}
putchar('\n');
return (0);
}
