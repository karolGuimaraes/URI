#include <stdio.h>
 
int main() {
	
	int x,n,i=0,j,soma;
	
	scanf ("%d",&n);
	
	while (i<n){
		scanf ("%d",&x);
		soma=0;
		
		for (j=1;j<x;j++){
			if (x%j==0){
				soma+=j;
			}
		}
		
		if (soma==x){
			printf ("%d eh perfeito\n",x);
		}
		else{
			printf ("%d nao eh perfeito\n",x);
		}
		i++;
	}
	
    return 0;
}
