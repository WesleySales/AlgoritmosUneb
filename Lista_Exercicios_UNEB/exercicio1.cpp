#include <stdio.h>

int main(){
	
	float a,b,c,media;
	
	printf("Digite um numero: ");
	scanf("%f", &a);
	printf("Digite um numero: ");
	scanf("%f", &b);
	printf("Digite um numero: ");
	scanf("%f", &c);
	
	float pesoA = a >= 6? a*5.0/10 : a*2.5/10;
	float pesoB = b >= 6? b*5.0/10 : b*2.5/10;
	float pesoC = c >= 6? c*5.0/10 : c*2.5/10;
	
	media = pesoA + pesoB + pesoC;
	
	printf("a media eh: %.2f",media);
	
}
