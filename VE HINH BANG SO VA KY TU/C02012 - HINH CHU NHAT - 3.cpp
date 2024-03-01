#include<stdio.h>
int main(){
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	for(int i=1;i<=hang;i++){
		if(i<=cot){
			if(i==1){
				for(int j=1;j<=cot;j++){
					printf("%d", j);
				}
			} else {
			    for(int j=i;j>=2;j--){
			    	printf("%d", j);
			    }
			    for(int k=1;k<=cot-i+1;k++){
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
