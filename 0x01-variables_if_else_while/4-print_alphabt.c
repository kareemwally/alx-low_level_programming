#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
{
if (i == 'q' || i == 'e')
continue;
putchar(i);
}
putchar('\n');
return (0);
}
