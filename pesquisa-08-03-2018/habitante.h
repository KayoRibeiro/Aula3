typedef struct habitante Habitante;




Habitante* criar(char *nome, int idade, char *sexo, float salario, int filhos );
void acessar(Habitante *habitante, char *nome,   int *idade, char *sexo, float *salarios, int *filhos);
void liberar(Habitante *habitante);
