
#include <stdio.h>
#include <stdlib.h>
#include "livro.c"


int main()
{
	
	
	Livro *livro, numeroLivros [5];
	char tituloDoLivro[30];
	float precoDoLivro=0;
	int paginasDoLivro=0;
	int anoDoLivro=0;
	int media =0;
	int contador = 0;
	double total =0;
	
	
	for(contador =0; contador<5; contador++)
	{
		printf("Titulo do livro: \n");
		fflush(stdin);
		gets(tituloDoLivro);
		printf("Quantidade de paginas: \n");
		scanf("%i", &paginasDoLivro);
		printf("Qual o preco do livro?: \n");
		scanf("%f", &precoDoLivro);
		printf("Ano que foi publicado?: \n");
		scanf("%i", &anoDoLivro);
		
		livro= criar( tituloDoLivro,   anoDoLivro ,  paginasDoLivro,  precoDoLivro );		
		numeroLivros[contador] = *livro;
		
		
		
	}
		
	for(contador=0;contador<5;contador++)
	{
		livro = &numeroLivros[contador];
		acessar(livro,tituloDoLivro,&anoDoLivro,  &paginasDoLivro,   &precoDoLivro);
		
		media =paginasDoLivro+ media;
		
	}

	total = media/5;
	printf("%f Media: ", total);	
}
	
	
	

