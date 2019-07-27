#include <stdio.h>
 
int main() {
	
	int tempo,hora,minuto,segundo;
	
	scanf("%d",&tempo);
	
	hora=tempo/3600;
	minuto=(tempo%3600)/60;
	segundo=(tempo%3600)%60;
	
	printf("%d:%d:%d\n",hora,minuto,segundo);
	
    return 0;
}
