#include"main.h"
/**
 *alloc_grid-function
 *description:this function allocates the right memory for 2d array
 *@width:number or columns
 *@height:number of rows
 *Return: duplicate pointer (int **)
 */
int **alloc_grid(int width, int height)
{
int *p1, **p2, o, k;
if (width <= 0 || height <= 0)
{
return(NULL);
}
p1 = (int *)malloc(sizeof(int)* width);
if (p1 == NULL)
{
return (NULL);
}
p2 = (int **)malloc(height * sizeof(int*));
if (p2 == NULL)
{
return (NULL);
}
for (k = 0; k < height; k++)
{
for (o = 0; o < width; o++)
{
p1[o] = o;
}
p2[k] = p1;
}
return (p2);
}
