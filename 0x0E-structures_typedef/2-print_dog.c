#include"dog.h"
#include<stdio.h>
#include<stddef.h>
/**
 *print_dog -function
 *description: this function prints fields of struct
 *@d:pointer of struct type
 *Return:(void)
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name);
printf("Age: %f\n:", (*d).age);
printf("Owner: %s", (*d).owner == NULL ? "(nil)" : (*d).owner);
}
}
