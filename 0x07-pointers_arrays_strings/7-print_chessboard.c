#include"main.h"
/**
 *print_chessboard -Function
 *Description:prints the chessboard
 *@a:the board representation
 *return:(void)
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
