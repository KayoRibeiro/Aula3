#define M 100 //linhas
#define N 100 //colunas
#include<stdio.h>
#include <stdlib.h> 
//passei só a coluna(obrigatório para o compilador)
void MostrarValores(int mat[][N]);
 
main()
{
      int mat[M][M];
      int *p;
      int i,j,soma=0;
 
      //iniciando valores
      for (i = 0;i < M; i++)
      {
          //a cada loop uma linha
          p = &mat[i][0];
 
          //percorre até o fim da linha
          for ( j = 0;j < N; j++)
          {
              *p = 3;
               p++;
          }
      }
 
      printf("Iniciando");
      
      MostrarValores(mat);
 
      soma = 0;
      for ( i = 0; i< M; i++)
      {
          //a cada loop uma linha
          p = &mat[i][0];
 
         //percorre até o fim da linha
         for ( j = 0; j < N; j++)
         {
             *p = soma;
             p++; //faltou
             soma++;
         }
      }
      MostrarValores(mat);
      system("pause");
}
 
void MostrarValores(int mat[][N])
{
      printf("\nMostrando valores:\n");
 
      int *p;
 
      for ( int i = 0; i< M; i++)
      {
          //a cada loop uma linha
          p = &mat[i][0];
 
         //percorre até o fim da linha
         for ( int j = 0; j < N; j++, p++)
         {
             printf("%d ", *p);
         }
 
         printf("\n");
      }
}
