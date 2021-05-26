#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define sla 10

void insertionsort(int *x,int n);
void imprimir(int *x,int n);

int main(void){
	
	setlocale(LC_ALL,"portuguese");
	int i,inf[sla];
	int tam = sizeof(inf)/sizeof(int);
	
	for(i = 0;i < tam;i++){
		printf("informe numeros aleatorios \n :");
		scanf("%d",&inf[i]);
		system("cls");	
	}
	printf("informações gravadas V\n");
	imprimir(inf, tam);
	printf("insertionsort V\n");
	insertionsort(inf, tam);
	imprimir(inf,tam);
	
	return(0);
}

void insertionsort(int *x,int n){
	int i, k, y;
	
	for(k = 1; k < n; k++){
		y = x[k];
		for(i = k-1; i >= 0 && y < x[i]; i--){
			x[i+1] = x[i];
		}
		x[i+1] = y;
	}
}

void imprimir(int *x,int n){
	int i;
	printf("| ");
	for(i = 0; i < n;i++){
		printf(" %d ",x[i]);
	}
	printf(" |\n\n");
}
