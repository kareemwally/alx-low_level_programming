#include"main.h"
/**
 * swap_int-function
 * Description:this function is to swap two variables values
 *@a:the address of 1st variable
 *@b:the address 2nd variable
 *return:void
 */
void swap_int(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
