#include <stdio.h>

int main() {
	
	int T,n=0;
	long int i,N[1000];
	
	scanf ("%d",&T);
	
	for (i=0;i<1000;i++){
		N[i] = n;
		n++;
		if(n==T){
			n=0;
		}
		printf ("N[%d] = %d\n",i,N[i]);
	}
	
    return 0;
}
