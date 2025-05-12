#include <stdio.h>

int main(){
	
	int i,a,b,c;
	int maior, medio, menor;
	
	printf("Digite o i: ");
	scanf("%d",&i);
	printf("Digite o a: ");
	scanf("%d",&a);
	printf("Digite o b: ");
	scanf("%d",&b);
	printf("Digite o c: ");
	scanf("%d",&c);
	
	if(a==0 || b==0 || c==0) {
		printf("As variaveis nao podem ser iguais a 0");
		return 0;
	}
	
	if(a>=b){
		if(a>=c){
			maior=a;
			if(b>=c){
				medio=b;
				menor=c;
			} else {
				medio=c;
				menor=b;	
			}
		} else {
			maior=c;
			medio=a;
			menor=b;
		} 
	} else if (b>=c){
		maior=b;
		if(c>=a){
			medio = c;
			menor=a;
		} else {
			medio=a;
			menor=c;
		}
	} else {
		maior=c;
		medio=b;
		menor=a;
	}
	
	switch(i){
		case 1:
			printf("Ordem CRESCENTE: %d - %d - %d",menor,medio,maior);
			break;
		case 2:
			printf("Ordem DECRESCENTE: %d - %d - %d",maior,medio,menor);
			break;
		case 3:
			printf("MODELO PODIO: %d - %d - %d",medio,maior,menor);
			break;
		default:
			printf("Digite um valor valido para i");
			break;
	}
	
}
