#include<stdio.h>
#include <stdlib.h> 


int main(void) /* esse programa esta errado */ {
 int x, *p;
 x = 10;
 p = &x;
 printf ("%d", *p);
}

