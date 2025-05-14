#include <stdio.h>

int main() {
    
    float somaA =0,somaB=0;
    
    for(int i=0;i<100;i++){
    	if(i%2!=0){
    		somaA += 1.0/i;
		}
	}
	
	printf("a) %.2f\n", somaA);
	
	for(int i=0;i<20;i++){
    	if(i%2!=0){
    		somaB += 1.0/i;
    		somaB -= 1.0/(i+2);
    		i+=2;
		}
	}
	printf("b) %.2f", somaB);
}