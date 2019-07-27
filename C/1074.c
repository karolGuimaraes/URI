#include <stdio.h>
 
int main() {
	
	int n,i;
	
	scanf("%d",&n);
	
	int vetor [n];
	
	for (i=0;i<n;i++){
		
		scanf("%d",&vetor[i]);
		
		if (vetor[i]==0){
			printf("NULL\n");
		}
		else{
			if (vetor[i]>0){
				if (vetor[i]%2==0){
					printf("EVEN POSITIVE\n");
				}
				else{
					printf("ODD POSITIVE\n");
				}
			}
			else{
				if (vetor[i]%2==0){
					printf("EVEN NEGATIVE\n");
				}
				else{
					printf("ODD NEGATIVE\n");
				}
			}
		}
	
	}
 
    return 0;
}
