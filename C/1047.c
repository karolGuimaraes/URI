#include <stdio.h>
 
int main() {
	
	int hI,hF,mI,mF,horas,min,aux;
	
	scanf ("%d %d %d %d",&hI,&mI,&hF,&mF);
	
	if (hI==hF){
		if (mI==mF){
			horas=24;
			min=0;
		}
		else{
			horas=0;
			min=mF-mI;
		}
	}
	else{
		if (hI<hF){
			if(mI<=mF){
				horas=hF-hI;
				min=mF-mI;
			}
			else{
				min = (mF+60) - mI;
				horas=(hF-1)-hI;
			}
		}
		else{
			if(mI<=mF){
				aux = hI-hF;
				horas = 24 - aux;
				min=mF-mI;
			}
			else{
				min = (mF+60) - mI;
				aux = hI - (hF-1);
				horas = 24 - aux;
				
			}
		}
	}
	
	
	printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,min);
	
    return 0;
}
