#include"main.h"
/**
 *string_nconcat-function
 *description:that function concatenates two strings partially or fully
 *@s1:the 1st string
 *@s2:the 2nd string
 *@n:the number of bytes
 *Return: (pointer)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *res;
int size = 0, i, j, size2 = 0;
if (s1 != NULL)
{
size += strlen(s1);
}
res = (char *) malloc(size);
if (res == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
res[i] = s1[i];
}
if (s2 != NULL)
{
if (n >= strlen(s2))
{
size += strlen(s2);
size2 = strlen(s2);
}
else
{
size += n;
size2 = n;
}

}
res = realloc(res, size);
if (res == NULL)
{
return (NULL);
}
for (j = 0; j < size2; j++)
{
res[i] = s2[j];
i++;
}
return (res);
}
