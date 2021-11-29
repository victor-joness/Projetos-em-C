
//Arquivo de prot�tipo de ponto.c

//Tipo exportado
typedef struct ponto Ponto;

//Fun��es exportadas

/*Aloca e retorna um ponto com coordenadas(x,y)*/
Ponto* cria(float x, float y);

/*Libera a mem�ria de um ponto previamente criado*/
void libera(Ponto* p);

/*Retorna os valores das coordenadas de um ponto*/
void acessa(Ponto *p, float *x, float *y);

/*Atribui novos valores �s coordenadas de um ponto*/
void atribui(Ponto* p, float x, float y);

/*Retorna a dist�ncia entre dois pontos*/
float distancia(Ponto* p1, Ponto* p2);
