typedef struct livro Livro;



Livro* criar(char *titulo, int ano, int paginas, float preco );
void acessar(Livro *livro, char *titulo,  int *ano,int *paginas, float *preco);
void liberar(Livro * livro);


