#include <stdio.h>
 
int main() {
	
	int i,positivos=0;
	float v[6],valores=0,media;
	
	for(i=0;i<6;i++){
		
		scanf("%f",&v[i]);
		
		if(v[i]>0){
			positivos++;
			valores+=v[i];
		}
	}
	
	media=valores/positivos;
	
	printf("%d valores positivos\n",positivos);
	printf("%.1f\n",media);

    return 0;
}
