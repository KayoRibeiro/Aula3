
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef struct node_t {
  int data;
  struct node_t *next;
} Node;


Node * insert_bottom(int, Node *);
Node * insert_before(int, int, Node *);
Node * deletar(int , Node*);
void print(Node *);
int count(Node *);

Node * deletar(int num, Node * head){
 Node *current_node = head;	
 Node *prev_node = current_node;
 int cont = 0;
 while (cont != (num-1)) {
 	prev_node = current_node;
    current_node = current_node->next;
    cont++;
  }
  if(cont!= 0){
  
  prev_node->next = current_node->next; 
  current_node->next = NULL;
  free(current_node);
  }else{
  	head = current_node->next;
  }
  return head;
 
}
Node * deletar_bottom(int num, Node *head){
	 Node *current_node = head;	
	 Node *prev_node = current_node;
	 while ( current_node != NULL && current_node->next != NULL) {
	 	prev_node = current_node;
  	    current_node = current_node->next;
    }
    prev_node->next = NULL;
    free(current_node);
    return head;
}
Node * insert_bottom(int num, Node *head) {
  Node *current_node = head;
  Node *new_node;
 while ( current_node != NULL && current_node->next != NULL) {
   current_node = current_node->next;
  }

  new_node = (Node *) malloc(sizeof(Node));
  new_node->data = num;
  new_node->next= NULL;
  if (current_node != NULL)
    current_node->next = new_node;
  else
     head = new_node;
return head;
}

 Node * insert_before(int num, int next_num, Node *head) {
  Node *current_node = head;
  Node *new_node;
  int cont = 1;
  while (cont != (next_num-1)) {
    current_node = current_node->next;
    cont++;
  }
  new_node = (Node *) malloc(sizeof(Node));
  new_node->data = num;
  new_node->next= current_node->next;
  current_node->next = new_node;
return head;
}

void print(Node *head) {
  Node *current_node = head;
  while ( current_node != NULL) {
    printf("%d ", current_node->data);
    current_node = current_node->next;
  }
}

/* Program main */ 
int main()
{
   Node *head = NULL;
   int num, prev_num, next_num;
   int option;
   char * temp;
   char ch;

   while(1) {

     printf("\n ***********************************\n");
     printf("\n *      lista operations:           *\n");
     printf("\n *  1. Insrir o final da lista      *\n");
     printf("\n *  2. inserir o valor em na enesima*\n");
     printf("\n *  3. Mostrar todos os elementos   *\n");
     printf("\n *  4. deletar o enesimo valor      *\n");
     printf("\n *  5. deletar o ultimo valor      *\n");
     printf("\n *  6. Quit                         *\n");
     printf("\n ************************************\n");
     printf("\n Escolha a opcao [1-6] : ");
     if (scanf("%d", &option) != 1) {
        printf(" *Erro: valor invalido. Tente de novo.\n");
        scanf("%s", &temp);
        continue;
     }

     switch (option) {
      case 1:     
          printf(" Entre com um numero : ");
          if (scanf("%d", &num) != 1) {
              printf(" *Error: Valor invalido. \n");
              scanf("%s", &temp); 
              continue;
          }
          head = insert_bottom(num, head);
          printf("%d Valor adicionado ao fim da lista", num);
          printf("\nPressione uma tecla para continuar");
          getch();
          break;

    

      case 3: 
          printf("\nElemetos da lista sao : \n [ ");
          print(head);
          printf("]\n\nPressione uma tecla para continuar");
          getch();
          break;
          
      case 4 : 
      printf(" Entre com um numero : ");
          if (scanf("%d", &num) != 1) {
              printf(" *Error: Valor invalido. \n");
              scanf("%s", &temp); 
              continue;
          }
          head = deletar(num, head);
          printf("\nPressione uma tecla para continuar");
          getch();
          break;
		 case 5 : 
		          head = deletar_bottom(num, head);
		          printf("\nPressione uma tecla para continuar");
		          getch();
		          break;
      case 6:  /* Exit */
          return(0);
          break;
          
          case 2:    
           printf("Entre com um numero : ");
           if (scanf("%d", &num) != 1) {
              printf(" *Error: Valor invalido. \n");
              scanf("%s", &temp);
              continue;
          }

          printf(" Diga em que posicao ele sera inserido : ");
          if (scanf("%d", &prev_num) != 1) {
              printf(" *Error: Valor invalido..\n");
              scanf("%s", &temp);
              continue;
          }

        if (head != NULL) {
             head = insert_before(num, prev_num, head);
             printf("Numero %d foi inserido na posicao %d", num, prev_num);
         }else {
             printf("Lista Vazia", num, prev_num);
         }
             printf("\nPressione uma tecla para continuar");
            getch();
            break;

      default:
          printf("Invalido essa opcao. Tente denovo.");
          getch();

      } 
   }

return(0);
}
