#include <stdio.h>
 
int main() {
 
   int vetor[100],maior=0,posicao,i;
   
   for (i=0;i<100;i++){
   	
	   scanf("%d",&vetor[i]);

	   if(vetor[i]>maior){
   		 maior=vetor[i];
   		 posicao=i;
	   }	
   }
    printf("%d\n",maior);
    printf("%d\n",posicao+1);
   
    return 0;
}
