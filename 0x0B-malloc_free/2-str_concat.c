#include"main.h"




void change (char *s1, char *s2, char *res)
{
for (i = 0; i < strlen(s1); i++)
{
res[i] = s1[i];
}
for (j = 0; j < strlen(s2); j++)
{
res[strlen(s1) + j] =s2[j];
}
}
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
