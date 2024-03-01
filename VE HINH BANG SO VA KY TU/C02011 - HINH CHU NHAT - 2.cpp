#include<stdio.h>
int main(){
	int hang, cot;
	scanf("%d%d", &hang, &cot);
    for(int i=1;i<=hang;i++){
		if(i<=cot){
			for(int j=i;j<=cot;j++){
				printf("%d", j);
			}
		    if(i>=2){
		    	for(int k=cot-1;k>=cot-i+1;k--){
		    		printf("%d", k);
		    	}
		    }
		} else {
			for(int m=1;m<=cot;m++){
				printf("%d", i-m+1);
		    }
		}
	    printf("\n");	
    }
}
	
