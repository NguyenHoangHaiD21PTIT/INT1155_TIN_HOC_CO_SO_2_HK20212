#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i = 1, c=97;
	for(int i=1;i<=n;i++){
	    if(i%2==1){
		    for(int j=1;j<=i;j++){
		        printf("%c ", c+j-1);
		    }
	    } else {
		    for(int j=i;j>=1;j--){
		        printf("%c ", c+j-1);
		    }
	    }
		printf("\n");
		c=c+i;
	}
}

