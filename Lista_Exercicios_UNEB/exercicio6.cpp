#include <stdio.h>

int main()
{
    int decimal;
    int binario[16];
    int termos=0,cont=15;
    
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);
    
    while(decimal>1){ //decimal = 18/0 - 9/1 - 4/0 - 2/0 - [1] -> 10010
        
        printf("atrubuindo valor ao binario: %d\n", decimal%2);
        binario[cont]=decimal%2;  //pego o resto do decimal e atribui a ultima posicao do vetor
        
        decimal/=2; //efetua a divisao
        cont--; //atualiza o contador
        termos++; //atualiza o numero de termos
    }
    
    printf("atrubuindo valor ao binario: %d\n\n", 1);
    binario[cont]=1;
    cont--; //atualiza o contador
    termos++; //atualiza o numero de termos
    
    printf("Contador %d e termos %d\n\n",cont, termos);
    
    for(int i=cont; i<16 ; i++){
        printf("%d", binario[i]);
    }
}
