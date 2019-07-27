#include <stdio.h>
 
int main() {
	
	int x;
	float y,total;
	
	scanf("%d", &x);
	scanf("%f", &y);
	
	total=x/y;
	
	printf("%.3f km/l\n", total);
 
    return 0;
}
