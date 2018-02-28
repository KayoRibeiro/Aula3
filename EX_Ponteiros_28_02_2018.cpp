#include <stdio.h>
#include <stdlib.h>


int main ()


{
	
	int N = 0;
	
	printf("Insira o  valor N:  \n");
	scanf("%i", &N);
	int *v;
	v = (int *) malloc(N*sizeof(int));
	
	for(int i = 0; i<N;i++)
		scanf("%i", v+i);
		
	for(int i = 0; i<N;i++)	
	printf("%i\n", *(v+i));
		
		
		free (v);
	
}
