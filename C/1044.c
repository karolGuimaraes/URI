#include <stdio.h>
 
int main() {
	
	int a,b,resto;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a>b){
		resto=a%b;
	}
	else{
		resto=b%a;
	}
	
	if(resto==0){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");
	}
 
    return 0;
}
