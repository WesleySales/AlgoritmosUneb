#include <stdio.h>

int main() {
    
    float massaInicial, massaFinal;
    int seg=0, min=0, horas=0;
    
    printf("Digite a massa inicial (em gramas): ");
    scanf("%f",&massaInicial);

    massaFinal=massaInicial;
    
    

    while(massaFinal>=0.5){
    	massaFinal=massaFinal/2;
    	
    	seg+=50;	
	}
	
	printf("\nsegundos %d\n", seg); 
	printf("\nmassa inicial: %.2f\nmassa final: %.2f\n", massaInicial, massaFinal);
	
	if(seg % 60 != 0){
		min = seg/60;
		seg = seg-min*60;		
	} else {
		min = seg/60;
		seg = 0;
	}

printf("%d horas, %d minutos e %d segundos",horas,min,seg);



}
