#include <stdio.h>
 
int main() {
	
	int vetor[5],i,pares=0;
	
	for (i=0;i<5;i++){
		scanf("%d",&vetor[i]);
		if(vetor[i]%2==0){
			pares++;
		}
	}
	
	printf("%d valores pares\n",pares);
 
    return 0;
}
