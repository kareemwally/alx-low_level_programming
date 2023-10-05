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
int **p2, o, k;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p2 = (int **)malloc(height * sizeof(int *));
if (p2 == NULL)
{
free(p2);
return (NULL);
}
for (k = 0; k < height; k++)
{
p2[k] = (int *)malloc(width *sizeof(int));
for (o = 0; o < width; o++)
{
p2[k][o] = 0;
}
}
return (p2);
}
