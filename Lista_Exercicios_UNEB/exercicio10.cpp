#include <stdio.h>

int main(){
	
	int dig, numeroDigitado[50], cont=0;
	
	printf("Digite um numero maior que 10 (um digito por vez): \n");
	
	do{
		scanf("%d", &dig);
		if(dig>=0){
			numeroDigitado[cont] = dig;
			cont++;	
		}
	} while(dig!=-1);
	
	cont--;
	int numeroInvertido[cont];
	
	printf("Numero invertido: \n");

	for(int i=cont;i>=0;i--){
		int j = cont-i;
		numeroInvertido[j]=numeroDigitado[i];
		printf(" %d",numeroInvertido[j]);
	}
	
	for(int i=cont;i>=0;i--){
		int j = cont-i;
		if(numeroDigitado[i]==numeroInvertido[j]){
			printf("PALINDROMO");
		} else {
			printf("É NADA");
		}
	}
	
	
	
	
}
