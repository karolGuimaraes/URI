#include <stdio.h>
 
int main() {
	
	int x,i,j,s;
	
	do{
		scanf ("%d",&x);
		if (x!=0){
			s=0;
			j=0;
			for (i=0;i<5;){
			  if (x%2==0){
			  	s+=x;
			  	i++;
			  }	
			  x++;
			}
			printf ("%d\n",s);		
		}
	}while(x!=0);
	
    return 0;
}
