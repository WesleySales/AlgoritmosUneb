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
	
	//caso alguma variavel seja igual a 0 o programa é encerrado aqui
	if(a==0 || b==0 || c==0) {
		printf("As variaveis nao podem ser iguais a 0"); 
		return 0;
	}
	
	if(a>=b){ //verifica se o a é maior que b;
	
		if(a>=c){ //verifica se a é maior que c;
		
			maior=a; // 'a' é maior que ambos, portanto salvei como maior
			
			if(b>=c){ //se 'b'>'c', o valor medio é b e o menor é c
				medio=b; 
				menor=c;
			} else { //caso contrario, o valor medio é c e o menor é b
				medio=c;
				menor=b;	
			}
			
		} else { // esse else se refere ao 'if(a>=c)', nesse caso o 'c' é maior que 'a', como no primeiro bloco ja confirmei se a>b, entao b é o menor valor;
			maior=c;
			medio=a;
			menor=b;
		} 
		
	} else if (b>=c){ // esse else se refere ao 'if(a>=b)', fiz uma verificacao a mais para saber se b>c, caso seja verdade o b é o maior valor
		maior=b;
		
		if(c>=a){ //se c>a, o valor medio é 'c'	e o menor é 'a';
			medio = c;
			menor=a;
		} else { //caso contrario o valor medio é 'a' e o menor é 'c'
			medio=a;
			menor=c;
		}
	} else { //se tudo acima for falso cai nesse else aqui:
		maior=c;
		medio=b;
		menor=a;
	}
	
	//usei o switch case pois terei valores certos pro 'i', apenas coloquei 'default' para exibir uma msg de erro caso o usuario digite algum valor diferente de 1,2 e 3
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
