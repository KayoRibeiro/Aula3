
#include <stdio.h>
#include <stdlib.h>
#include "habitante.c"


	
	int main()	
	{
		Habitante *habitante, numeroHabitantes [500];
		char nomeDoHabitante[30];
		int idadeDoHabitante;
		char sexoDoHabitante[12];
		float salarioDoHabitante;
		int filhosDoHabitante;
		int contador = 0;
		float media;
		
		
			for(contador =0;contador<500;contador++)
			{
				
				printf("Nome: \n");
				fflush(stdin);
				gets(nomeDoHabitante);
				printf("Sexo: \n");
				fflush(stdin);
				gets(sexoDoHabitante);
				printf("Salario: \n");
				scanf("%f", &salarioDoHabitante);
				printf("Numero de filhos: \n");
				scanf("%i", &filhosDoHabitante);
				printf("Idade: \n");
				scanf("%i", &idadeDoHabitante);
				
				
				habitante= criar(nomeDoHabitante,  idadeDoHabitante, sexoDoHabitante,  salarioDoHabitante,  filhosDoHabitante  );		
				numeroHabitantes[contador] = *habitante;				
				
			}
			
			
			for(contador=0;contador<500;contador++)
			{
				
				habitante = &numeroHabitantes[contador];
				acessar(habitante,nomeDoHabitante,  &idadeDoHabitante, sexoDoHabitante,  &salarioDoHabitante,  &filhosDoHabitante );
				
				media =(salarioDoHabitante/500)+ media;
				
			}
			
		printf("Media: %f \n", media);
		
		
	}

