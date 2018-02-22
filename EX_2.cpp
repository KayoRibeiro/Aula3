# include <stdio.h>
int main( )
 { int x, *p;
  x=10;
 // esta não é a foma certa de se pegar um valor com ponteiro, afinal ponteiro só recebe endereço de memoria   *p = x;
 p = &x;
   }
