#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal;
    int binario[16];
    int cont=15;
    int i;
    
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);
    
    while(decimal>1){ 
        binario[cont]=decimal%2; 
        
        decimal/=2;
        cont--;
       
    }
    
    binario[cont]=1;
    // cont--;
   
    for(i=cont; i<16 ; i++){
        printf("%d ", binario[i]);
    }
    
    system("pause");
}
