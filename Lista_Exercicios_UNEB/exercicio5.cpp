#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int decimal=0;
    char binario[50];
    
    printf("CONVERSOR BINARIO -> DECIMAL\n");
    printf("Digite o numero binario: ");
    scanf("%s", binario);
    
    int tamanho = strlen(binario);
    tamanho--;
    
    for(int i=0;i<=tamanho;i++){
    	if(binario[i]!='1' && binario[i]!='0'){
    		printf("Termo invalido, o numero binario so aceita '0' e '1'.");
    		return 0;
   		} else if (binario[i]=='1'){
    		decimal += powl(2,tamanho-i);
		}
	}
    
    printf("\n\nO decimal eh: %d", decimal);
}
