#include <stdio.h>

int main() {
	
	double N[100];
	int i;
	
	scanf ("%lf",&N[0]);
	printf("N[%d] = %.4lf\n",0,N[0]);
	
	for (i=1;i<100;i++){	
			N[i] = N[i-1]/2.0;
			printf("N[%d] = %.4lf\n",i,N[i]);
	}

    return 0;
}
