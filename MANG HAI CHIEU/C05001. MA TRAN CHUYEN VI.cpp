#include<stdio.h>
int main(){
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	int a[hang][cot];
	for(int i=0;i<hang;i++){
		for(int j= 0;j<cot;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int b[cot][hang];
	for(int i=0;i<cot;i++){
		for(int j= 0;j<hang;j++){
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<cot;i++){
		for(int j= 0;j<hang;j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}
	

