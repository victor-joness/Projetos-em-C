#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct no{
	int elemento;
	int fator_b;
	
	struct no* esq;
	struct no* dir;

}Tno;
void menu();
int altura_AVL(Tno *a);
int calcula_FB(Tno *a);
Tno* rotacao_simples_esquerda(Tno *a);
Tno* rotacao_simples_direita(Tno *a);
Tno* balanceamento(Tno* a);
Tno * balanceio_esquerda(Tno *a);
Tno * balanceio_direita(Tno *a);
Tno* inserir(Tno* a, int elemento);
void imprime(Tno* a);
