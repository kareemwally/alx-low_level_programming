#include <stdlib.h>
#include <time.h>
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
putchar('\n'); /*notice here that it must formatted in single qoutes*/
	return (0);
}

