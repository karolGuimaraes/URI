#include <stdio.h>

int main() {
	
	int i,m=1,n=1,soma;
		
	while (m>0 && n>0){
		scanf ("%d %d",&m,&n);
		soma=0;
		
		if (m>0 && n>0)	{
			if (m<n){
				for (i=m;i<=n;i++){
					printf ("%d ",i);
					soma+=i;
				}
			}
			else{
				for (i=n;i<=m;i++){
					printf ("%d ",i);
					soma+=i;
				}	
			}
			printf("Sum=%d\n",soma);
		}
	}
	
    return 0;
}
