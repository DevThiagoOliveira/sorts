#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void shellsort(int *x, int n, int *inc, int num);
void imprimir(int *x,int s);


int main(){
	
	int arquivo[] = {10, 5, 2, 1, 3, 6, 7, 8, 9, 4};
	int arq[] = {3, 5, 2};
	int tam = sizeof(arquivo) / sizeof(int);
	int t = sizeof(arq) / sizeof(int);
	
	imprimir(arquivo, tam);
	shellsort(arquivo, tam, arq, t);
	printf("\n\n");
	imprimir(arquivo, tam);
	
	system("pause");
	return 0;
}

void shellsort(int *x, int n, int *inc, int num){
	int i, k, j, span, y;
	
	for(i = 0;i < num; i++){
		span = inc[i];
		for (j = span; j < n; j++){
			y = x[j];
			for(k = j - span; k >= 0 && y < x[k]; k-=span){
				x[k+span] = x[k];
			}
			x[k+span] = y;	
		}	
	}
}

void imprimir(int *x,int s){
	int i;
	printf("> ");
	for(i =0; i < s; i++){
		printf(" %d ",x[i]);
	}
	printf(" < \n\n");
}
