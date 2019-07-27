#include <stdio.h>
 
int main() {
	
	float n1,n2,n3,n4,media,nrecuperacao,mrecuperacao;
	
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
	media=(n1*2+n2*3+n3*4+n4*1)/10;
	
	printf("Media: %.1f\n",media);
	
	if(media>=7){
		printf("Aluno aprovado.\n");
	}
	else{
		if(media>=5 && media<=6.9){
			printf("Aluno em exame.\n");
			scanf("%f",&nrecuperacao);
			printf("Nota do exame: %.1f\n",nrecuperacao);
			mrecuperacao=(media+nrecuperacao)/2;
			if(mrecuperacao>=5){
				printf("Aluno aprovado.\n");
			}
			else{
				printf("Aluno reprovado.\n");
			}
			printf("Media final: %.1f\n",mrecuperacao);	
		}
		else{
			printf("Aluno reprovado.\n");
		}
	}
    return 0;
}
