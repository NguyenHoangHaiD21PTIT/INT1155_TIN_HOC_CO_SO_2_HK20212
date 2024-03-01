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
		    	for(int k=i-1;k>=1;k--){
		    		printf("%d", k);
		    	}
		    }
		} else {
			printf("%d", i);
			for(int m=cot-1;m>=1;m--){
				printf("%d", m);
			}
		}
	    printf("\n");	
    }
}
	
