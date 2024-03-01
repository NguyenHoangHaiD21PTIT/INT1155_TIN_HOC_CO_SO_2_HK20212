#include<stdio.h>
int main(){
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	for(int i=1;i<=hang;i++){
	    if(i<cot){
	        for(int j=1;j<=cot-i;j++){
	        	printf("%c", 63+j+(i-1));
	        }
	        for(int k=1;k<=i;k++){
	        	printf("%c", 63+cot);
	        }
	    } else {
	    	for(int l=1;l<=cot;l++){
	    		printf("%c", 63+cot);
	    	}
	    }
		printf("\n");
	}
}
