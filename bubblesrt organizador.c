#include <stdio.h>

// Ajeitador -- Ordenador de informações : Bubblesort
void bubblesort(int a[], int n,int count){
  int aux ,i ,j;
	for(i =0;i < n;i++){
		for(j = 0; j < n-1;j++){
			if(a[j] > a[j+1]){
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
				count++;
			}
		}
	}
}
	
int main(){
	
	int dados[] = {10, 9 , 4 , 1 , 3 , 2, 5, 6, 8, 7};
	int i, contador, tam = sizeof(dados) / sizeof(int);
	
	for(i = 0;i < tam;i++)
		printf(" %d |", dados[i]);
	
	printf("\n");
	
	bubblesort(dados, tam, contador);
	
	for(i = 0;i < tam;i++)
		printf(" %d |", dados[i]);
	printf("\n\n quantidade de mudanças : %d  \n\n",contador);
	
	return 0;
}

