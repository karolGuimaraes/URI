#include <stdio.h>
 
int main() {
	
	int i,j,n,x,y,impar;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf ("%d %d",&x,&y);
		
		if (x<y){
	    	for(j=x+1;j<y;j++){
		    	if(j%2!=0){
				   impar+=j;
			    }
		    }	
		}
		else{
			for(j=y+1;j<x;j++){
		    	if(j%2!=0){
				   impar+=j;
			    }
		    }
		}
			
		printf("%d\n",impar);
		impar=0;
	}
    return 0;
}
