#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n;i++){
	  	if(i%2==1){
	     	for(int j = 1; j<=2 * i - 1;j=j+2){
	     	printf("%d",j);
	    }
		} else {
		    for(int K = 2; K<=2 * i ;K=K+2){
		     	printf("%d",K);
		    }
		}
		printf("\n");
	}
}
	
