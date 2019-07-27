#include <stdio.h>
 
int main() {
	
	int i,n,r=0,c=0,s=0,x,total=0;
	char t;
	float perC,perR,perS;
	
	scanf ("%d",&n);
	
	for (i=0;i<n;i++){
		
		scanf ("%d %c",&x,&t);
		
		if (x>=1 && x<=15){
		
			if (t=='R'){
				r+=x;
			}
			else{
				if (t=='C'){
					c+=x;
				}
				else{
					s+=x;
				}
			}
			total+=x;	
		}
		
	}
	
	perC=(100*c)/(float)total;
	perR=(100*r)/(float)total;
	perS=(100*s)/(float)total;
	
	printf ("Total: %d cobaias\n",total);
	printf ("Total de coelhos: %d\n",c);
	printf ("Total de ratos: %d\n",r);
	printf ("Total de sapos: %d\n",s);
	printf ("Percentual de coelhos: %.2f %%\n",perC);
	printf ("Percentual de ratos: %.2f %%\n",perR);
	printf ("Percentual de sapos: %.2f %%\n",perS);
	
    return 0;
}
