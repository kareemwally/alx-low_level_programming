#include"main.h"
/**
 *_calloc-function
 *description:the function allocates array using calloc
 *@nmemb:the number of elements
 *@size:the size pf each element
 *Return: (void)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *res;
if (nmemb == 0 || size == 0)
return (NULL);
else
res = calloc((int)nmemb, (int)size);
if (res == NULL)
return (NULL);
else
return (res);
}
