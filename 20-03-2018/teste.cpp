# include <stdio.h>

int main() {
	//declarando varivel e ponteiro do tipo inteiro
 int y, *p, x;
 //setando valor do inteiro
 y = 0;
 //passando endereço do inteiro y para o ponteiro
 p = &y;
 //passando o valor do endereço do ponteiro para o inteiro x
 x = *p;
 //passando o valor 4 para o inteiro x
 x = 4;
 // incrumentando 1 ao conteudo do ponteiro
 (*p)++;
 //retirando 1 do conteudo de x
 x--;
 // o conteudo do ponteiro esta somando o valor de x a ele
 (*p) += x;
 // exibindo o valor de y
 printf ("y = %d\n", y);
 return(0);
 }

