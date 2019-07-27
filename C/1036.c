#include <stdio.h>
#include <math.h>
 
int main() {
	
	double a,b,c,x1,x2,delta,deltaRaiz;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	delta=(pow(b,2)-(4*a*c));
	
	
	if(delta>=0 && a!=0){
		
		deltaRaiz=sqrt(delta);
				
		x1=((b*-1)+deltaRaiz)/(2*a);
		
		x2=((b*-1)-deltaRaiz)/(2*a);
		
		printf("R1 = %.5lf\n",x1);
		printf("R2 = %.5lf\n",x2);
	}
	else{
		
		printf("Impossivel calcular\n");
	}
	
    return 0;
}
