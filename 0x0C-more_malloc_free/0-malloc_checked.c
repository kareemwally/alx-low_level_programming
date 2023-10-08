#include"main.h"
/**
 *malloc_checked-function
 *description:this function allocates void pointer
 *@b:the size of the pointer
 *Return: (void)
 */
void *malloc_checked(unsigned int b)
{
void *res = malloc((int)b);
if (res == NULL)
{
exit(98);
}
return (res);
}
