#include <stdio.h>
 
int main() {
	
	int x,y,i,j;
	
	scanf ("%d",&x); // n por linha 
	scanf ("%d",&y); // até o n
	
	for (i=1;i<=y;){
		
		for (j=1;j<=x;j++){
			
			if (j!=x){
				printf("%d ",i++);
			}
			else{
				printf("%d",i++);
			}
		}
		printf("\n");
	}

    return 0;
}
