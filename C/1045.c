#include <stdio.h>
 
int main() {
 
    float A,B,C,aux;
    
    scanf ("%f",&A);
    scanf ("%f",&B);
    scanf ("%f",&C);
    
    if (A>B && A>C){
    	if (C>B){
			aux=C;
			C=B;
			B=aux;	
	    }
	}
	else{
		
		if (B>A && B>C){
			if (A>C){
				aux=A;
				A=B;
				B=aux;	
			}
			else{
				aux=A;
				A=B;
				B=aux;
				aux=C;
				C=B;
				B=aux;
				
			}
		}
		else{
			if (A>B){
				aux=A;
				A=C;
				C=aux;
				aux=C;
				C=B;
				B=aux;
			}
			else{
				aux=A;
				A=C;
				C=aux;	
			}
		}
	}
        
	if (A>=(B+C)){
    	printf("NAO FORMA TRIANGULO\n");
    }
    else{
     	if ((A*A)==((B*B)+(C*C))){
    	    printf("TRIANGULO RETANGULO\n");
	    }
    
    	if ((A*A)>((B*B)+(C*C))){
    		printf("TRIANGULO OBTUSANGULO\n");
		}
	
		if ((A*A)<((B*B)+(C*C))){
    		printf("TRIANGULO ACUTANGULO\n");
		}
     		
     	if (A==B && B==C){
    		printf("TRIANGULO EQUILATERO\n");
		}
		else{
			if (A==B || B==C || A==C){
				printf("TRIANGULO ISOSCELES\n");
			}	
		
		}	
    }

    return 0;
}
