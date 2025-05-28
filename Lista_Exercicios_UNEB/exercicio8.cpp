#include <stdio.h>

int main()
{
float somaA=0, somaB=0;
int vetor[100], cont=0;

for(int i=0; i<100;i++){
     if(i%2!=0){
          somaA += 1.0/i;
          vetor[cont] = i;
          cont++;
     }
}

printf("a) %.4f\n", somaA);

//Letra b

for(int i=0; i<20;i++){
     if(i%2==0){
          somaB+= 1.0/vetor[i];
          //printf("+ 1/%d", vetor[ i ]);
     } else {
          somaB-= 1.0/vetor[i];
          //printf("- 1/%d", vetor[ i ]);
     }
}

printf("b) %.4f", somaB);
}