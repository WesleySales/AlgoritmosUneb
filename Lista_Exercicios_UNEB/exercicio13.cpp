#include <stdio.h>

int main() {
    
    float massa;
    int seg=0, min=0, horas=0;
    
    printf("Digite a massa inicial (em gramas): ");
    scanf("%f",&massa);
    
    
    while(massa>=0.5){
    	massa=massa/2;
    	
    	seg+=50;	
	}
	
	printf("\nsegundos %d\n", seg); 
	
	if(seg % 60 != 0){
		min = seg/60;
		seg = seg-min*60;		
		printf("%d horas, %d minutos e %d segundos",horas,min,seg);
	} else {
		min = seg/60;
		seg = 0;
	}
}