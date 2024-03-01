#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n;i++){
		for(int j = 1; j<=2*i-1;j++){
			if(i==j){
				printf("%c", 2 * (31+i));
			} else if (j< i){
				printf("%c", 2 * (31+j));
			} else if (j> i){
				printf("%c", 2 * (31+ (i - (j%i))));
			}
		}
		printf("\n");
	}
}
