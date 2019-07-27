#include <stdio.h>
 
int main() {
	
	int i,j=7,k;
	
	for (i=1;i<=10;i=i+2){
		k=j-3;
		for (;j>k;j--){
			printf("I=%d J=%d\n",i,j);
		}
		j=j+5;
	}

    return 0;
}
