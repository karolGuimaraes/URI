#include <stdio.h>
 
int main() {
	
	float salario,novosalario,reajuste;
	int percentual;
	
	scanf("%f",&salario);
	
	if(salario>=0 && salario<=400){
		novosalario=salario+(salario*0.15);
		reajuste=salario*0.15;
		percentual=15;
	}
	else{
		if(salario>=400.01 && salario<=800){
			novosalario=salario+(salario*0.12);
			reajuste=salario*0.12;
		    percentual=12;
		}
		else{
			if(salario>=800.01 && salario<=1200){
				novosalario=salario+(salario*0.10);
				reajuste=salario*0.10;
	        	percentual=10;
			}
			else{
				if(salario>=1200.01 && salario<=2000){
					novosalario=salario+(salario*0.07);
					reajuste=salario*0.07;
		            percentual=7;
				}
				else{
					novosalario=salario+(salario*0.04);
					reajuste=salario*0.04;
	            	percentual=4;
				}
			}
		}
	}
	
	printf("Novo salario: %.2f\n",novosalario);
	printf("Reajuste ganho: %.2f\n",reajuste);
	printf("Em percentual: %d %%\n",percentual);
 
    return 0;
}
