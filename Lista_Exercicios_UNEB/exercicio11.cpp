#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[100];
	
	printf("Digite o nome: ");
	scanf("%s", palavra);
	
	int tamanho = strlen(palavra);
//	printf("A palavra %s tem %d letras", palavra,tamanho);
	
	char palavraInvertida[tamanho];
	
	for(int i=0;i<tamanho;i++){
		palavraInvertida[i] = palavra[tamanho-1-i];
	}
	
	palavraInvertida[tamanho]='\0';
	
//	printf("Palavra ORIGINAL: %s\nPalavra INVERTIDA: %s\n", palavra,palavraInvertida);
		
	strcmp (palavra, palavraInvertida) == 0? printf("EH PALINDROMO"): printf("NAO EH PALINDROMO");
	
}
