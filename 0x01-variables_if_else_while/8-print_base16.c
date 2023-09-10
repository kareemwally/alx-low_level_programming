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
int i;
for (i = 48; i <= 102 ; i++)
{
i = putchar(i);
if (i == 57)
i = 96;
}
putchar('\n');
return (0);
}
