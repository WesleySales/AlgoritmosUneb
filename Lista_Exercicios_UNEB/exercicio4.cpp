#include <stdio.h>

int main(){
	
	int numero;
	int soma=0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(int i=1;i<numero;i++){
		soma += i; 
	}
	
	printf("resultado = %d", soma);
}
