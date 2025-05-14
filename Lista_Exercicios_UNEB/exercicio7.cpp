#include <stdio.h>

int main(){
	
	int numero;
	int soma=0;
		
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(int i=1;i<numero;i++){
		if(numero %i==0){
			soma += i;
		}
	}
	
	if(numero==soma) printf ("O numero %d eh perfeito", numero);
	else printf("O numero nao eh perfeito");
}