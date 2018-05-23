#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int placa[20];
char acao[20][1];
char atual[1];
int  fila[10];
int quantidade = 0;
int espera[10];
int contEspera = 0;


int main(){
	
	for(int i = 0; i<3; i++)
	{
	
	printf("Insira uma acao\n");
	scanf("%s", atual);
	
	strcpy(acao[i], atual);
	
	printf("Insira um numero de placa\n");
	
	scanf("%i", &placa[i]);
   
   }
	
	for(int j = 0;j<3; j++)
	{
	if(strcmp(acao[j], "C")==0){
		fila[quantidade]= placa[j];
		if(quantidade < 10){
		printf(" esta entrando a placa i%\n", fila[j]);
		quantidade++;
	}else{
		espera[contEspera]=placa[j];
		contEspera++;
	}
	
	}
	if(strcmp(acao[j], "P")==0){
		int cont=0;
		while(fila[cont]!= placa[j])
		cont++;
	
		
		printf(" esta saindo a placa i%  estava na poasicao %i\n", fila[cont], cont);
		
		for(int i = cont; i>=0; i--){
			int k = i-1;
			if(i!=0)
			fila[i]= fila[k];
			else{
				fila[i]=0;
			}
		}
		quantidade--;
		
		if(contEspera>0){
			 fila[0] = espera[0];
			 contEspera--;
			 quantidade++;
			 printf(" esta entrando a placa i%\n", fila[0]);
			 
		}
	}
    }
}
