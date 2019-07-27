#include <stdio.h>
 
int main() {
	
	int x=1,i;
	
	while (x!=0){
		
		scanf("%d",&x);
		
		if (x!=0){
			for (i=1;i<=x;i++){
				if (i!=x){
					printf ("%d ",i);
				}
				else{
					printf ("%d",i);
				}
				
		   }
		   printf("\n");	
		}
	}
    return 0;
}
