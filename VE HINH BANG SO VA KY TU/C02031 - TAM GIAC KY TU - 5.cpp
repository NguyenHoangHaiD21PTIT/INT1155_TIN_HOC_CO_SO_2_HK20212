#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int c=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			printf("%c", 63+c+(j-1));
		} 
		c--;
		printf("\n");
	}
}
