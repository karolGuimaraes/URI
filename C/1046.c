#include <stdio.h>
 
int main() {
 
    float inicio,fim;
    int horas=0,time;
    
    scanf ("%f",&inicio);
    scanf ("%f",&fim);
    
    if (inicio==fim){
    	horas=24;
	}
	else{
		
		if (inicio<fim ){
			horas=fim-inicio;
			
		}
		else{
			time=inicio-fim;
			horas=24-time;
		}
	}
    
    printf("O JOGO DUROU %d HORA(S)\n",horas);
    
    return 0;
}
