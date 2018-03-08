#include <string.h>
#include <stdlib.h>
#include "habitante.h"



struct habitante
{
	char nome[30];
	char sexo[12];
	float salario;
	int idade;
	int filhos;
	
	
};


		Habitante *criar(char *nomeDoHabitante, int idadeDoHabitante, char *sexoDoHabitante, float salarioDoHabitante, int filhosDoHabitante )
		{
			Habitante *o=(Habitante*)malloc(sizeof(Habitante));
			
			if(o!=NULL)
			{
				
				strcpy(o-> nome, nomeDoHabitante);
				strcpy(o-> sexo, sexoDoHabitante);
				o->idade=idadeDoHabitante;
				o->filhos =filhosDoHabitante;
				o->salario=salarioDoHabitante;
			
				
				
			}
			return o;
			
		}
		
		
			void acessar(Habitante *habitante, char *nomeDoHabitante, int *idadeDoHabitante, char *sexoDoHabitante, float *salarioDoHabitante, int *filhosDoHabitante ) 
			{
				strcpy(nomeDoHabitante,habitante->nome);
				strcpy(sexoDoHabitante,habitante->sexo);
				*salarioDoHabitante = habitante->salario;
				*idadeDoHabitante = habitante->idade;
				*filhosDoHabitante = habitante->filhos;
				
			}
	
	void liberar(Habitante *habitante)
	{
		free(habitante);
	}
