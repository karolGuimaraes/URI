#include <stdio.h>
#include <string.h>
 
int main() {
	
	char tipo1[20],tipo2[20],tipo3[20];
	
	scanf("%s",&tipo1);
	scanf("%s",&tipo2);
	scanf("%s",&tipo3);
	
	if(strcmp (tipo1,"vertebrado")==0){ 

		if(strcmp (tipo2,"ave")==0){
		
			if(strcmp (tipo3,"carnivoro")==0){
				printf("aguia\n");
			}
			else{
				printf("pomba\n");
			}
		}
		else{
			if(strcmp (tipo3,"onivoro")==0){
				printf("homem\n");
			}
			else{
				printf("vaca\n");
			}
		}
	}
	else{
		if(strcmp (tipo2,"inseto")==0){
			
			if(strcmp (tipo3,"hematofago")==0){
				printf("pulga\n");
			}
			else{
				printf("lagarta\n");
			}
		}
		else{
			if(strcmp (tipo3,"hematofago")==0){
				printf("sanguessuga\n");
			}
			else{
				printf("minhoca\n");
			}
		}
	}

    return 0;
}
