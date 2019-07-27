#include <stdio.h>
 
int main() {
 
   int codigo,codigo2,numero,numero2;
   float valor,valor2,total;
   
   scanf("%d %d %f",&codigo,&numero,&valor);
   scanf("%d %d %f",&codigo2,&numero2,&valor2);
   
   total=numero*valor+numero2*valor2;
   
   printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}
