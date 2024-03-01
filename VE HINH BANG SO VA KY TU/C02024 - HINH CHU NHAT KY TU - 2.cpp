#include<stdio.h>
int main(){
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	for(int i=1;i<=hang;i++){
	    if(i<cot){
	        for(int j=1;j<=cot-i+1;j++){
	        	printf("%c", 64+j+(i-1));
	        }
	        if(i>=2){
	            for(int k=i-1;k>=1;k--){
	            	printf("%c", 64+k);
	            }
	        }
	    } else {
	    	for(int j=cot;j>=1;j--){
	    		printf("%c", 64+j);
	    	}
	    }
		printf("\n");
	}
}
