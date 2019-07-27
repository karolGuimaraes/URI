#include <stdio.h>
 
int main() {
 
    int x,y,i,soma=0;
    
    scanf("%d",&x);
    scanf("%d",&y);
    
    if (x<=y){
    	i=x+1;
    	for (i;i<y;i++){
        	if(i%2!=0){
    	    	soma+=i;	
	        }  
		}
	}
	else{
		i=y+1;
		for (i;i<x;i++){
        	if(i%2!=0){
    	    	soma+=i;	
	        }  
		}	
	}
    
	printf("%d\n",soma);
 
    return 0;
}
