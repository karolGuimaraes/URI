#include <stdio.h>
 
int main() {
	
	int x=1,y=1;
	
	
	while ( x!=0 && y!=0){
		
		scanf("%d",&x);
		scanf("%d",&y);
		
		if ( x==0 || y==0){
			
		}
		else {
			if(x>0 && y>0){
			printf("primeiro\n");
		}
		else{
			if (x>0 && y<0){
				printf("quarto\n");
			}
			else{
				if ( x<0 && y>0){
					printf("segundo\n");
				}
				else{
					printf("terceiro\n");
				}
			}
		}
				
	}
		
	}
    return 0;
}
