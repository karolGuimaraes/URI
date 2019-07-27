#include <stdio.h>
 
int main() {
	
	int cont,validador;
	float nota,total,media; 
	
	while (cont!=2){
		validador=0;
		total=0;
		media=0;
		
		while (validador!=2){
			scanf ("%f",&nota);	
			
			if (nota>=0 && nota<=10){
				total+=nota;
				validador++;
				
				if (validador==2){
					media = (total/validador);
              		printf("media = %.2f\n",media);
				}
			}
			else{
				printf ("nota invalida\n");
			}	
		}

		do {
			printf ("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&cont);
		}while (cont<1 || cont>2);
	}
	
    return 0;
}
