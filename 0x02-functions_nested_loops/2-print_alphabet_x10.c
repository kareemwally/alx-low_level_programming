#include"main.h"
/**
 * print_alphabet_x10 - function
 *
 * Description:'This program is to print alphabet 10 times'
 *
 * Return:void it just prints (Success)
 */
void print_alphabet_x10(void)
{
int i, j = 0;
while (j != 10)
{
for (i = 97; i <= 122; i++)
{
putchar(i);
}
j++;
putchar('\n');
}
}
