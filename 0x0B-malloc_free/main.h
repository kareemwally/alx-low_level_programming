#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include<math.h>
#include <string.h>
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int i;
char *create_array(unsigned int size, char c);
#endif
