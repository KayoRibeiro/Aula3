# include <stdio.h>
int main( )
 { int x, *p;
  x=10;
 // esta n�o � a foma certa de se pegar um valor com ponteiro, afinal ponteiro s� recebe endere�o de memoria   *p = x;
 p = &x;
   }
