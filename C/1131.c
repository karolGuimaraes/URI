#include <stdio.h>
 
int main() {
	
	int gremio,inter,cont,empates=0,vInter=0,vGremio=0,grenais=0;
	
	do{
		
		scanf("%d %d",&inter,&gremio);
		grenais++;
		
		if (inter==gremio){
			empates++;
		}
		else{
			if (inter>gremio){
				vInter++;
			}
			else{
				vGremio++;
			}
		}
		
		printf ("Novo grenal (1-sim 2-nao)\n");
		scanf ("%d",&cont);
	}while (cont!=2);
	
	printf ("%d grenais\n",grenais);
	printf ("Inter:%d\n",vInter);
	printf ("Gremio:%d\n",vGremio);
	printf ("Empates:%d\n",empates);
	if (vInter==vGremio){
		printf ("Nao houve vencedor\n");
	}
	else{
		if (vInter>vGremio){
			printf ("Inter venceu mais\n");
		}
		else{
			printf ("Gremio venceu mais\n");
		}	
	}
 
    return 0;
}
