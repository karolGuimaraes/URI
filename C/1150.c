#include <stdio.h>
 
int main() {
	
	int x,z=0,rep=0,aux=0;
	
	scanf ("%d",&x);
	
	while (z<=x){
		scanf("%d",&z);
	}

	while (aux<z){
		aux+=x;
		rep++;
		x++;
	}
	
	printf ("%d\n",rep);
	
    return 0;
}
