#include <stdio.h>
 
int main() {
	
	int x,n,i=0,j,div;
	
	scanf ("%d",&n);
	
	while (i<n){
		
		scanf ("%d",&x);
		div=0;
		for (j=1;j<=x;j++){
			
			if(x%j==0){
				div++;
			}
		}
		
		if (div==2){
			printf("%d eh primo\n",x);
		}
		else{
			printf("%d nao eh primo\n",x);
		}
		i++;
	}
	
    return 0;
}
