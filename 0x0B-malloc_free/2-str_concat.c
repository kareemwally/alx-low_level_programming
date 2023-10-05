#include"main.h"
/**
 *change-function
 *description:only to concat the s1 and s2 to res
 *@s1:the 1st string
 *@s2:the 2nd string
 *@res:s1 + s2
 */
void change (char *s1, char *s2, char *res)
{
int size1 = 0, size2 = 0;
res = NULL;
if (s1 != NULL)
{
size1 = strlen(s1);
for (i = 0; i < size1; i++)
{
res[i] = s1[i];
}
}
if (s2 != NULL)
{
size2 = strlen(s2);
for (j = 0; j < size2; j++)
{
res[j] =s2[j];
}
}
/**
 *str_concat-function
 *description:that function return concated string
 *@s1:the 1st str
 *@s2:the 2nd str
 *Return: (pointer)
 */
char *str_concat(char *s1, char *s2)
{
int size = strlen(s1) + strlen(s2);
char *res = malloc(size + 1);
if (res == NULL)
{
return (NULL);
}
change(s1, s2, res);
return (res);
}
