#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * print_alphabet - Function
 *
 * Description:'prototyped function'
 *
 * Return:Void it just prints
 */
void print_alphabet(void);
/**
 * main - Entry point
 *
 * Description:'IN this function other fuctions will be invoked '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - Functoion
 *
 * Description:'the body of the previous function'
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
