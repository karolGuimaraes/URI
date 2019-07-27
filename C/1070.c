#include <stdio.h>
 
int main() {
 
    int x,i,n;
    
    scanf("%d",&x);
    n=x;
    for (i=0;i<6;){
    	if(n%2!=0){
    		printf("%d\n",n);
    		i++;
		}
		n++;
	}
 
    return 0;
}
