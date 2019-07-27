#include <stdio.h>
 
int main() {
 
    float n;
    int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,m1=0,m50=0,m25=0,m10=0,m5=0,m01=0;
    
    scanf("%f",&n);
    
    while (n>=100.00){
    	n-=100.00;
    	n100++;
	}
	
	while (n>=50.00){
		n-=50.00;
		n50++;
	}
	
	while (n>=20.00){
		n-=20.00;
		n20++;
	}
	
	while (n>=10.00){
		n-=10.00;
		n10++;
	}
	
    while (n>=5.00){
    	n-=5.00;
    	n5++;
	}
	
	while (n>=2.00){
		n-=2.00;
		n2++;
	}
	
	while (n>=1.00){
		n-=1.00;
		m1++;
	}
	
	while (n>=0.50){
		n-=0.50;
		m50++;
	}
	
	while (n>=0.25){
		n-=0.25;
		m25++;
	}
	
	while (n>=0.10){
		n-=0.10;
		m10++;
	}
	
	while (n>=0.05){
		n-=0.05;
		m5++;
	}
	
	while (n>=0.01){
		n-=0.01;
		m01++;
	}
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m1);
    printf("%d moeda(s) de R$ 0.50\n",m50);
    printf("%d moeda(s) de R$ 0.25\n",m25);
    printf("%d moeda(s) de R$ 0.10\n",m10);
    printf("%d moeda(s) de R$ 0.05\n",m5);
    printf("%d moeda(s) de R$ 0.01\n",m01);
    
    return 0;
}
