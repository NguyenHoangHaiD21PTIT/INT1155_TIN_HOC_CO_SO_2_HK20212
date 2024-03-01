#include<stdio.h>
int main(){
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	if(hang<=cot){
		for(int i=1;i<=hang;i++){
			for(int j=1;j<=cot-i;j++){//cot-i+1:So dau tien o moi hang//tg tren
				printf("%d", (cot-i+1)-(j-1));
			}
			for(int k=1;k<=i;k++){//tg duoi
				printf("%d", k);
			}
			printf("\n");
	    }
	} else {
		for(int i=1;i<=hang;i++){
			if(hang-i+1>cot){//hang-i+1: So dau moi hang
		        for(int j=1;j<=cot;j++){
		        	printf("%d", (hang-i+1)-(j-1));
		        }
		    } else {//hang-i+1:phan tu dau tien moi hang
		    	for(int j=1;j<=hang-i;j++){//cot-i+1:So dau tien o moi hang/do chenh
				    printf("%d", (hang-i+1)-(j-1));//hang-i: so phan tu moi hang tam giac tren
			    }
			    for(int k=1;k<=(cot-(hang-i));k++){
				    printf("%d", k);
			    }
			}
			printf("\n");
	    }
	}
}

