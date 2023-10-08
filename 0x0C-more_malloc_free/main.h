#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
#endif
