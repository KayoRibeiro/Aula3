#include<stdio.h>



 int main () { 
 int x; int *p1, *p2; p1=&x; p2=p1; 
   printf("%p", p2); }

// R: é impresso o "lixo" que esta apontado na memoria;
