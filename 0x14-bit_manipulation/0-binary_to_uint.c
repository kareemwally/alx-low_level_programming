#include "main.h"
/**
 *is_only_binary-function
 *description:that function checks the pointer
 *@b:pointer to binary word
 *Return:(int)
 */
int is_only_binary(const char *b)
{
size_t i;
for (i = 0; i < strlen(b); i++)
{
if (!(b[i] == 48 || b[i] == 49))
{
return (0);
}
}
/**
 *binary_to_uint-function
 *description:that function converts binary to int
 *@b:pointer to binary word
 *Return:(int)
 */
unsigned int binary_to_uint(const char *b)
{
int res = 0;
if (b == NULL || is_only_binary(b) == 0)
{
return (0);
}
else
{
while (*b)
{
res = res * 2 + (*b++ - '0');
}
}
return (res);
}
