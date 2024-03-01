#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n;i++){
		for(int j = 1; j<=i;j++){
			if(j==1){
				printf("%d ", i);
			} else if (j>=2){
				int c = ((j-1)*j)/2;
				printf("%d ",i+(j-1)*n-c);
			}
		}
		printf("\n");
	}
}

