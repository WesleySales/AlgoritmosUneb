#include <stdio.h>

int main(){
	
	int numAnterior, numAtual;
	int seqAtual=0, seqMaior;
	
	while(numAtual>=0){
		printf("Digite um numero: \n\n");
		scanf("%d", &numAtual);
		
		if(numAtual>numAnterior){
			seqAtual++;
			printf("O numero atual (%d) eh MAIOR que o antecessor (%d): sequencia atualizada: %d",numAtual, numAnterior,seqAtual);
		}
		else if(numAtual>0){
			seqMaior = seqAtual;
			seqAtual=1;
			printf("O numero atual (%d) eh MENOR que o antecessor (%d): sequencia atualizada: %d",numAtual, numAnterior,seqAtual);
		}		
		
		numAnterior = numAtual;
		
		printf("\n\nDigite '-1' para encerrar!\n\n");
	}
	if(seqAtual>seqMaior) seqMaior=seqAtual;
//	seq = seq>seqMaior? seq:seqMaior;
	printf("A maior sequencia crescente foi %d",seqMaior);
}
