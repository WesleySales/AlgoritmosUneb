#include <stdio.h>

int main(){
	
	double habPaisA = 90000000;
	double habPaisB = 200000000;
	
	int contadorAnos=0;
	
	while(habPaisA<habPaisB){
		habPaisA *= 1.03;
		habPaisB *= 1.015;
		
		contadorAnos++;
	}
	
	printf("%d anos para o pais A passar ou igualar o pais B", contadorAnos);
	
}