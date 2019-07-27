#include <stdio.h>
 
int main() {
	int tempo,velocidade;
	float litros;
	
	scanf("%d",&tempo);
	scanf("%d",&velocidade);
	
	litros=(tempo*velocidade)/(float)12;

	printf("%.3f\n",litros);

    return 0;
}
