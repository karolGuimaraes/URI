#include <stdio.h>
 
int main() {
 
   int i;
   float s=0,j=1.0;
   
   for (i=1;i<=39;){
		s+=(i/j);
		i+=2;
		j=j*2;
   }
   printf ("%.2f\n",s);
 
    return 0;
}
