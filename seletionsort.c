#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void selectionsort(int a[],int n)
{
	int j,i,maior, indice;
	
	for(i = n-1 ; i > 0; i--)
	{
	maior = a[0];
	indice = 0;
	
	for( j = 1; j <= i; j++)
	{
		if(a[j] > maior)
		{
		maior = a[j];
		indice = j;	
		}
	}
	
	a[indice] = a[i];
	a[i] = maior;
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int vec[10];
	
	int i,size = sizeof(vec) / sizeof(int);

	for( i =0;i < size;i++)
	{
	printf("escreva um número aleatorio \n\n :");
	scanf("%d",&vec[i]);
	system("cls");
	}

	for(i = 0; i < size;i++)
	{
		printf(" %d |",vec[i]);
	}
		
	printf("\n");
	
	selectionsort(vec, size);
	
	for(i = 0; i < size;i++)
	{
		printf(" %d |",vec[i]);
	}
	
	return 0;
}
