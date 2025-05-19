#include <stdio.h>
#include <math.h>

int main()
{
    int decimal=0;
    int binario[50];
    int dig;
    int termos=0;
    
    printf("CONVERSOR BINARIO -> DECIMAL\n");
    printf("Digite o numero binario: ");
    
    while(dig==1 || dig==0){
	    scanf("%d", &dig);    	
		binario[termos] = dig;
		
    	if(dig==1 || dig==0) termos++;
    	
    	printf("termos: %d\n\n", termos);
	}
	
	termos--;
	
    for(int i=0;i<=termos;i++){
    	printf(" %d", binario[i]);
//    	int res = (binario[i] * powl(2,termos-i));
//    	printf("calc: %d * %d ^ %d = %d\n",binario[i], 2,termos-i,res);
    	decimal += binario[i] * powl(2,termos-i);
	}
    
    printf("\n\nO decimal eh: %d", decimal);
    
}
