#include <stdio.h>

int main(){
	
	char nome[15][50];
	float altura[50];
	char sexo[1][50];
	
	float maiorAltura =0, menorAltura=3;
	
	float somaAlturaTurma=0, mediaAlturaTurma;
	float somaAlturaMulheres=0,mediaAlturaMulheres;
	int contadorAlunos=0, contadorMulheres=0;
	
	for(int i=0;i<50;i++){
		printf("\nDigite o nome: ");
		scanf("%s", &nome[1][i]);
		
		scanf("");
		
		printf("Digite a altura: ");
		scanf("%f",&altura[i]);
		printf("Digite o sexo: 'M' ou 'F': ");
		scanf(" %c", &sexo[1][i]);
	}
	
	for(int i=0;i<50;i++){
		
		//Logica para somar a altura da turma, será importante para a media dps
		somaAlturaTurma+=altura[i];
		
		//Logica para somar a altura das mulheres da turma
		if(sexo[1][i]=='F'){
			somaAlturaMulheres+= altura[i]; 
			contadorMulheres++; //atualiza o contador de mulheres na turma, será importante para a media de altura das mulheres
		}
		
		//Logica para pegar a maior altura
		if(altura[i]>maiorAltura){
			maiorAltura = altura[i];
		}
		
		//Logica para pegar a menor altura
		if(altura[i]<menorAltura){
			menorAltura = altura[i];
		}
				
		contadorAlunos++;
		
	}
	
	printf("a) maior e menor altura: \n");
	printf("MAIOR: %.2fm - MENOR: %.2fm\n\n", maiorAltura,menorAltura);
	
	mediaAlturaMulheres = somaAlturaMulheres/contadorMulheres;
	printf("b) media de alturas das mulheres: %.2fm\n\n", mediaAlturaMulheres);
	
	mediaAlturaTurma = somaAlturaTurma/contadorAlunos;
	printf("c) media de altura da turma: %.2fm", mediaAlturaTurma);
}