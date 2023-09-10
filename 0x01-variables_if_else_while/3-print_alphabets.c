#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'This program to print the alphabet by for loop'
 *
 *Return: Always 0 (Success)int main(void)
 */
int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
{
putchar(i);
}
for (i = 'A' ; i <= 'Z' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
