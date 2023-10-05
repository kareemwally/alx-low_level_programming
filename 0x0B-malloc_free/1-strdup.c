#include"main.h"
char *_strdup(char *str)
{
char *s = strdup(strlen(str));
if (s == NULL || str == NULL)
return (NULL);
else
return (s);
}
