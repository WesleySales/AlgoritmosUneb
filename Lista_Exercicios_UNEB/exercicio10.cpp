#include <stdio.h>

int main(){
	
	int numAnterior, numAtual;
	int seqAtual=0, seqMaior;
	
	printf("Digite '-1' para encerrar a qualquer momento!\n\n");
	
	while(numAtual>=0){
		printf("Digite um numero: ");
		scanf("%d", &numAtual);
		
		if(numAtual>numAnterior){
			seqAtual++;
		}
		else if(numAtual>0){
			seqMaior = seqAtual;
			seqAtual=1;
		}		
		
		numAnterior = numAtual;
	}
	if(seqAtual>seqMaior) seqMaior=seqAtual;
	printf("A maior sequencia crescente foi %d",seqMaior);
}
