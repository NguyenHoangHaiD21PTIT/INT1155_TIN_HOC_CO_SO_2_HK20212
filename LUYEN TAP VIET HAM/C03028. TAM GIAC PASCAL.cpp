#include <stdio.h>
int C(int k, int n){//to hop chap k cua n
	if(k==0||k==n){
		return 1;
	} else if (k==1|k==n-1){
		return n;
	} else {
		return C(k-1,n-1)+C(k,n-1);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1;i<=n;i++){
	  	for(int j=1;j<=i;j++){
	  		printf("%d ", C(j-1,i-1));
	  	}
		printf("\n");
	}
}
