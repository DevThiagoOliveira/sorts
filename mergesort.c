#include <stdio.h>
#include <stdlib.h>

void intercala(int *x, int inicio, int fim, int meio);
void imprimir(int *x, int n);
void merge(int *x,int inicio, int fim);

int main(void){
	
	int arquivo[] = {5,4,8,7,9,6,1,2,10,3};
	int tam = sizeof(arquivo) / sizeof(int);
	
	imprimir(arquivo, tam);
	merge(arquivo, 0, tam-1);
	imprimir(arquivo, tam);
	return 0;
}

void intercala(int *x, int inicio, int fim, int meio){
	
	int poslivre, inicioN, meioM1, i;
	int aux[fim];
	
	inicioN = inicio;
	meioM1 = meio+1;
	poslivre = inicio;
	
	while(inicioN <= meio && meioM1 <= fim){
		if(x[inicioN] <= x[meioM1]){
			aux[poslivre] = x[inicioN];
			inicioN++;
		}else{
			aux[poslivre] = x[meioM1];
			meioM1++;
		}
		poslivre++;
	}
	
	for (i = inicioN; i <= meio; i++){
	aux[poslivre] = x[i];
	poslivre++;
	}
	
	for (i = meioM1; i <= fim; i++){
		aux[poslivre] = x[i];
		poslivre++;
	}
	
	for (i = inicio; i <= fim; i++){
		x[i] = aux[i];
	}
	}

void imprimir(int *x,int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}

void merge(int *x, int inicio, int fim){
	int meio;
	if(inicio < fim){
		meio = (inicio+fim)/2;
		merge(x, inicio, meio);// divide
		merge(x, meio+1, fim); // compara
		intercala(x, inicio, fim, meio); // junta
	}
}
