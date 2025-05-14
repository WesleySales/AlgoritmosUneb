#include <stdio.h>

int main(){
	
	int numero;
	int fatorial=1;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(int i=1;i<=numero;i++){
		fatorial *= i; // o mesmo que dizer fatorial = fatorial * i
	}
	
	printf("resultado = %d", fatorial);
}