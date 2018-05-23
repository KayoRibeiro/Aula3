#include<stdlib.h>
#include<stdio.h>
int atendidos[100];
int pendentes[100];
int acao = 7;
int contador = 0;
int contador_1 = 0;

int relistar(){
	for(int i =1; i<contador; i++){
		pendentes[0] = pendentes[i]; 
	}
	
}
int main(){

while(acao!=0){

printf("Menu\n");
printf("1-   Novo pedido\n");
printf("2-   Atender\n");
printf("3-   Listar novos pedidos\n");
printf("4-   Listar atendidos\n"); 	
printf("0-   Sair\n");
scanf("%i", &acao);
if(acao == 1)
{
	printf("Insira o codigo do pedido\n");
	scanf("%i", &pendentes[contador]);
	contador++;
}
if(acao == 2)
{
	printf("O codigo  foi atendido:  \n");
	 atendidos[contador_1] = pendentes[0];
	 printf("%i\n", atendidos[contador_1]);
	 relistar();
	 
	contador--;
	contador_1++;
}
 if(acao==3)
 {
 	printf("Lista de novos pedidos\n");
 	for(int i =0; i<contador; i++)
	 {
 		printf("%i\n", pendentes[i]);
	 }	
 }
 
 if(acao==4)
 {
 	printf("Lista de  pedidos atendidos\n");
 	for(int i =0; i<contador_1; i++)
	 {
 		printf("%i\n", atendidos[i]);
	 }	
 }
}
}
