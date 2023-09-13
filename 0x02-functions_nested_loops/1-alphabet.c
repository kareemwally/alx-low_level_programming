#include "main.h"
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
print_alphabet()
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
