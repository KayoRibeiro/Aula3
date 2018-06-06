#include<stdio.h>
#include<stdlib.h>



struct fila
{
	int placa[10];
	int posicao;
	int elemento;	
};

typedef struct fila Fila;
typedef struct pilha Pilha;

Fila* createRoll();
Fila* inserir(Fila* fila, int placa);
int remover(Fila* fila);
int removeP(Fila* fila, int posicao);
void listar(Fila *fila);

int main ()
{
	Fila* fila;
	Fila* wait;
	
	int input = 0;
	int placa = 0;
	int entrada = 0; 
	
	fila = createRoll();
	wait = createRoll();
	
	while(1)
	{
		system("cls");
		printf("\t  Vagas Ocupadas: %i\nVeiculos na fila: %i\n\n", fila->elemento, wait->elemento);
		printf("Por Favor Selecione uma das opções a seguir:\n");
		printf("1- Estacionar\n");
		printf("2- Retirar\n");
		printf("3- Exibir veiculos dentro do estacionamento\n");
		printf("4- Exibir veiculos Aguardando\n");
		scanf("%i", &input);
		if(input == 1)
		{
			printf("Digite a placa: ");
			scanf("%i", &placa);
			if(fila->elemento == 10)
			{
				inserir(wait, placa);
			}
			else
			{
				inserir(fila, placa);
			}
		}
		else if(input == 2)
		{
			printf("Qual deseja Retirar?\n");
			listar(fila);
			
			scanf("%i", &entrada);
			removeP(fila,entrada);
			if(wait->elemento > 0)
			{
				inserir(fila, wait->placa[(wait->posicao)%E]);
				remover(wait);
			}
			system("pause");
		}
		else if(input == 3)
		{
			listar(fila);
			system("pause");
		}
		else if(input == 4)
		{
			listar(wait);
			system("pause");
		}
	}
	
	return 0;
}

int remover(Fila* fila)
{
	Fila remover = *fila;
	
	if(fila->elemento == 0)
	{
		printf("Estacionamento Vazio\n");
		return 0;
	}
	
	int placa = fila->placa[fila->posicao];
	fila->posicao = (fila->posicao+1)%E;
	fila->elemento--;
	
	return placa;
}

Fila* createRoll()
{
	Fila* fila = (Fila*) malloc (sizeof(Fila));
	if(fila != NULL)
	{
		fila->elemento = 0;
		fila->posicao = 7;
		
		return fila;
	}
}
int removeP(Fila* fila, int posicao)
{
	Fila *novo=createRoll();
	
	
	int x = 1;
	
	if(fila->elemento == 0)
	{
		printf("Estacionamento Vazio\n");
		return 0;
	}
	
	for(x; x < posicao; x++)
	{
		inserir(novo, remover(fila));
	}

	printf("Veiculo saiu: %i\nQuantidade de movimentos: %i\n", fila->placa[fila->posicao], x);
	remover(fila);
	
	for(x; x > 1; x--)
	{
		
		inserir(fila, remover(novo));
	}

}

void listar(Fila *fila)
{
	Fila f = *fila;
	int x = 1;
	while(f.elemento > 0)
	{
		printf("%i - Placa: %i\n", x, f.placa[f.posicao]);
		f.elemento--;
		f.posicao = (f.posicao+1)%E;
		x++;
	}
}

Fila* inserir(Fila* fila, int placa)
{
	if(fila->elemento == 10)
	{
		printf("Estacionamento cheio\n");
		return 0;
	}
	
	fila->placa[(fila->elemento+fila->posicao)%E] = placa;
	fila->elemento++;
	
	return fila;
}



