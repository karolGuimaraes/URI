#include <stdio.h>

int main() {
	
	int t,n,i,j;
	long long fibo[61];
	fibo[0] = 0;
	fibo[1] = 1;
	
	scanf ("%d",&t);
	
	for (j=2;j<=60;j++){		
		fibo[j]=fibo[j-2]+fibo[j-1];
	}

	for (i=0;i<t;i++){
		scanf ("%d",&n);
		printf ("Fib(%d) = %lld\n",n,fibo[n]);
	}

    return 0;
}
