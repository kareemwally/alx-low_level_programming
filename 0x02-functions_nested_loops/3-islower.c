#include"testH.h"
/**
 * _islower - function
 *
 * Description:'This program is to checks lowercase letters'
 *
 * Return:1 if lowercase(Success) or 0 uppercase
 */
int _islower(int c)
{
int i;
if (c >= 97 && c < 123)
i = 1;
else
i = 0;
return i;
}
