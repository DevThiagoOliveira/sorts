#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void quicksort(int *vetorInteiro, int inicio, int final);
int particao(int *vetorInteiro, int inicio, int final);
void troca(int *vetorInteiro, int esquerda, int direita);
void imprimir(int *vetorInteiro, int size);


int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int vetorFull[10];
	int tamanho = sizeof(vetorFull) / sizeof(int);
	
	
	for(i = 0; i < tamanho; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetorFull[i]);
		system("cls");
	}
	
	imprimir(vetorFull, tamanho);
	printf("\n");
	quicksort(vetorFull, 0, tamanho-1);
	imprimir(vetorFull, tamanho);
	
	system("pause");
	return 0;
}

int particao(int *vetorInteiro, int inicio, int final){ // arruma o vetor e descobre o indice do meio ajeitando o mesmo para o meio
	int meio, esquerda, direita;
	
	meio = vetorInteiro[(inicio+final)/2];
	esquerda = inicio-1;
	direita = final+1;
	
	while(esquerda < direita){
		do{
			direita--;
		}while(vetorInteiro[direita] > meio);
		
		do{
			esquerda++;
		}while(vetorInteiro[esquerda] < meio);
		
		if(esquerda < direita)
			troca(vetorInteiro, esquerda, direita); // faz a troca do indice da esquerda pelo da direita
	}
	return direita;

}

void quicksort(int *vetorInteiro, int inicio, int final){ // faz a partição do vetor e a comparação
	int meio;	
	if(inicio < final){ // compara
		
		meio = particao(vetorInteiro, inicio, final);
		quicksort(vetorInteiro, inicio, meio);
		quicksort(vetorInteiro, meio+1, final);
	}
}

void troca(int *vetorInteiro, int esquerda, int direita){
	
	int auxiliar,contador;
	
	auxiliar = vetorInteiro[esquerda];
	vetorInteiro[esquerda] = vetorInteiro[direita];
	vetorInteiro[direita] = auxiliar;
	
}

void imprimir(int *vetorInteiro, int size){
	int i;
	
	printf("| ");
	for(i = 0; i < size; i++){
		printf(" %d ", vetorInteiro[i]);
	}
	printf(" | \n");
}



