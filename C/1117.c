#include <stdio.h>
 
int main() {
 
   int validador=0;
   float nota,total=0,media;
   
   while (validador!=2){
     	
		 scanf ("%f",&nota);
   	
	    if ( nota>=0 && nota<=10){
   	 		total+=nota;
   	 		validador++;
   	 		
   	 		if (validador==2){
   	 		 	media = (total/validador);
              	printf("media = %.2f\n",media);
			}
		}
		else {
			printf("nota invalida\n");
		}
   }
   
    return 0;
}
