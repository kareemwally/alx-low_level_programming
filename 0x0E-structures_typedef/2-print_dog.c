#include"dog.h"
/**
 *print_dog -function
 *description: this function prints fields of struct
 *@d:pointer of struct type
 *Return:(void)
 */

void print_dog(struct dog *d)
{
if (d == NULL)
printf("");
else
printf("Name: %s\nAge: %f\nOwner: %s", (*d).name, (*d).age, (*d).owner);
}
