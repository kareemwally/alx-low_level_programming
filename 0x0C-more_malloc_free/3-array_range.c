#include"main.h"
/**
 *array_range-function
 *description:the function craetes pointer like this [min....max]
 *@min:the least value in the array
 *@max:the biggest value in the array
 *Return: (pointer)
 */
int *array_range(int min, int max)
{
int *res, i, size;
(void)res;
if (min > max)
return (NULL);
else
{
size = max - min + 1;
res = calloc(size, sizeof(int));
}
if (res == NULL)
return (NULL);
else
for (i = 0; i < size; i++)
{
res[i] = min;
min++;
}
return (res);
}
