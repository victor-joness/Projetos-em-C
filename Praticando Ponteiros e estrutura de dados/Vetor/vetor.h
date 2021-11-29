
//As fun��es que v�o servir para o desenvolvimento do TAD Vetor.

/*Victor Jones Mesquita de Sousa - 511418
  Victor Manoel Pinheiro Coutinho - 497315
  Antonio Mauricio Rodrigues Araujo Junior - 500749
  LAILSON SERAFIM DE SOUZA - 494870
*/

/*Tipo estruturado que representa um Vetor*/
typedef struct vetor Vetor;

//Fun��es exportadas

//cria Fun��o que cria um vetor de tamanho n.
Vetor* criaVetor(int n);

//libera Fun��o que libera a mem�ria alocada para um vetor.
void liberaVetor(Vetor* v);

//tamanho Fun��o que retorna o tamanho de um vetor.
int tamanhoVetor(Vetor* v);

//acessa Fun��o que acessa o conte�do de uma determinada posi��o i do vetor.
float acessa(Vetor* v, int i);

//atribui Fun��o que atribui um conte�do c a uma determinada posi��o i do vetor.
void atribui(Vetor* v, int i, float c);

//ordena Fun��o que ordena um vetor em ordem crescente.
void ordena(Vetor* v);

//listar Fun��o que lista todos os elementos do vetor.
void listarVetor(Vetor* v);

//somar elementos Fun��o que retorna a soma de todos os elementos de um vetor.
float somaElementosVetor(Vetor* v);

/*somar vetores Fun��o que retorna um vetor resultante da soma dos elementos
correspondentes de dois vetores. A fun��o dever� verificar se os vetores tem
o mesmo tamanho.*/
Vetor* somaVetores(Vetor* v1, Vetor* v2);
