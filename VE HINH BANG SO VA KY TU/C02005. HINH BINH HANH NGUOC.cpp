#include<stdio.h>
int main(){
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	for(int i = 1; i<= hang; i++){
		for(int j=2;j<=i;j++) printf("~");
		for(int k = 1; k<= cot; k++) printf("*");
		printf("\n");
	}
}
