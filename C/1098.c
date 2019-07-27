#include <stdio.h>
 
int main() {
	
	double a[]={0}, b[]={1,2,3};
	int i,j;
	
	for (i=0;i<11;i++){
		
		for (j=0;j<3;j++){
			
			if(i==0 || i==5 || i==10){
				printf("I=%.lf J=%.lf\n",a[0],b[j]);
			}
			else{
				printf("I=%.1lf J=%.1lf\n",a[0],b[j]);	
			}	
		}
		a[0] = a[0] + 0.2;
		b[0] = b[0] + 0.2;
		b[1] = b[1] + 0.2;
		b[2] = b[2] + 0.2;
	}

    return 0;
}
