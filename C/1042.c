#include <stdio.h>
 
int main() {
 
  int a,b,c,p,s,u;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  if(a>b && a>c){
  	u=a;
  	if(b>c){
  		s=b;
  		p=c;
	  }
	  else{
	  	s=c;
	  	p=b;
	  	
	  }
  }
  else{
  	if(b>a && b>c){
  		u=b;
  		if(a>c){
  			s=a;
  			p=c;
		  }
		  else{
		  	s=c;
		  	p=a;
	
		  }
	  }
	  else{
	  	u=c;
	  	if(a>b){
	  		s=a;
	  		p=b;
		  }
		  else
		  {
		  	s=b;
		  	p=a;
		  }
	  
	  }
  }
  
  printf("%d\n",p);
  printf("%d\n",s);
  printf("%d\n",u);
  printf("\n");
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);

    return 0;
}
