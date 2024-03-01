#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int g=1;g<=t;g++){
    	int hang, cot;
    	scanf("%d%d", &hang, &cot);
    	int a[50][50];
    	for(int i=0;i<hang;i++){
    		for(int j=0;j<cot;j++){
    			scanf("%d", &a[i][j]);
    		}
    	}
    	for(int i=0;i<hang;i++){
    		for(int j=0;j<cot;j++){
    			for(int m=i;m<hang;m++){
    				for(int n=j;n<cot;n++){
    					if(a[i][j]>a[m][n]){
    						int tmp=a[i][j];
    						a[i][j]=a[m][n];
    						a[m][n]=tmp;
    					}
    				}
    			}
    		}
    	}
        printf("Test %d: ", g);
        printf("\n");
        for(int i=0;i<hang;i++){
    		for(int j=0;j<cot;j++){
    			printf("%d ", a[i][j]);
    		}
    		printf("\n");
    	}
    }
}
