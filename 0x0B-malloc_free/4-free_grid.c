#include"main.h"
/**
 *free_grid-function
 *description:this function frees memory of grid
 *@grid:the 2d array we wanna release
 *@height:number of 1d arrays in grid
 *Return: (void)
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
