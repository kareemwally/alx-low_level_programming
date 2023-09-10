#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this program is to print lowercase reversed alphabet'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
