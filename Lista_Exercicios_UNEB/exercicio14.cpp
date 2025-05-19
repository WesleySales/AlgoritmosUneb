#include <stdio.h>

int main(){
	
	int termos;
	int prox, prim=0,seg=1;
	
	printf("Digite o numero de termos: ");
	scanf("%d", &termos);
	
	for(int i=1;i<=termos;i++){
		prox = seg+prim;
		prim = seg;
		seg=prox;
		
		printf("%d ", prox);
	}
}
