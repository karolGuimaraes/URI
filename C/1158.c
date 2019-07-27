#include <stdio.h>
 
int main() {
	
	int n,x,y,k,j,i,soma;
	
	scanf ("%d",&n);
	
	for (i=0;i<n;i++){
		
		scanf ("%d %d",&x,&y);
		soma=0;
		j=0;
		while (j<y){
			
			if (x%2){
				soma+=x;
				j++;	
			}	
			x++;
		}
		printf ("%d\n",soma);
	}
	
    return 0;
}
