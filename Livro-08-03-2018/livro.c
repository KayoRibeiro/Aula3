#include <string.h>
#include <stdlib.h>
#include "livro.h"
	
	struct livro
	{
		char titulo[30];
		int paginas;
		int ano;
		float preco;
		
		
	};

	
	Livro* criar(char *tituloDoLivro,  int anoDoLivro , int paginasDoLivro, float precoDoLivro)
	{
		Livro *o =(Livro*) malloc(sizeof(Livro));
		
		if(o!= NULL)
		{
			strcpy(o-> titulo, tituloDoLivro);
			
		    o->preco = precoDoLivro;
		    
		    o->paginas = paginasDoLivro;
		    
		    o->ano = anoDoLivro;
		    
		  
		       
		    
		}
		return o;
			
	}
	
	
	void acessar(Livro *livro, char *tituloDoLivro, int *anoDoLivro, int *paginasDoLivro, float *precoDoLivro) 
	{
		strcpy(tituloDoLivro,livro->titulo);
		*precoDoLivro = livro->preco;
		*paginasDoLivro = livro->paginas;
		*anoDoLivro = livro->ano;
		
	}
	
	void liberar(Livro *livro)
	{
		free(livro);
	}
	
