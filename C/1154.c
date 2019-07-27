#include <stdio.h>
 
int main() {
 
   int idade=0,pessoas=0,totalIdade=0;
   float media;
   
   while (idade>=0){
   	 scanf ("%d",&idade);
   	 if (idade>=0){
   	 	pessoas++;
   	 	totalIdade+=idade;
		}
   }
   
   media=(totalIdade/(float)pessoas);
   printf("%.2f\n",media);
 
    return 0;
}
