#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n;i++){
		for(int j = 1; j<=i;j++){
			if(j==1){
				printf("%c ", 64+i);
			} else if (j>=2){
				int c = ((j-1)*j)/2;
				printf("%c ",64+i+(j-1)*n-c);
			}	
		}
		printf("\n");
	}
}

