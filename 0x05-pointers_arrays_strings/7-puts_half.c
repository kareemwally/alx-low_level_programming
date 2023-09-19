#include"main.h"
/**
 *puts_half-Function
 *Description:this function is to print n/2 or n/2 +1 chars 
 *@strr:the string we wanna print
 *Return:void
 */
void puts_half(char *str)
{
int i, a = strlen(str);
if (a % 2 == 0)
for (i = (a / 2); i < a; i++)
{
printf("%c", str[i]);
}
else
for (i = (a / 2) + 1; i < a; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
