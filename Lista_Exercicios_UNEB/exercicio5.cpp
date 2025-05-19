#include <stdio.h>
#include <math.h>

int main()
{
    int decimal=0;
    int binario[50];
    int dig;
    int termos=0,cont=15;
    
    printf("CONVERSOR BINARIO -> DECIMAL\n");
    
    printf("Digite o numero binario: ");
    scanf("%d", &dig);
    
    binario[termos]=dig
    termos++;
    
    while(binario[termos]!=1&& binario[termos]!=2){
        printf("Digite o numero binario: ");
        scanf("%d", &binario[termos]);
        termos++;
        
        int res = powl(binario[termos],termos);
        decimal+=res;
    } 
    
    printf("O decimal eh: %d", decimal);
    
}
