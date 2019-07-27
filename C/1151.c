#include <stdio.h>
 
int main() {
 
    int n,i,aux=0,fibo=0,n1=1,n2=1;
    
    scanf ("%d",&n);
   
    if (n<46){
    	for (i=1;i<=n;i++){
        
        	if (i==n){
        		printf ("%d\n",fibo);	
			}
			else{
				printf ("%d ",fibo);
			}
			aux=n2;
			n2=fibo;
			n1=aux;
			fibo=n1+n2;
		}
	}
    
    return 0;
}
