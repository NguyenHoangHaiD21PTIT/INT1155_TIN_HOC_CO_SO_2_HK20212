#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int h=1;h<=t;h++){
		int x, y, p;
		scanf("%d%d%d", &x, &y, &p);
		int a[x], b[y];
		for(int i=0;i<x;i++){
			scanf("%d", &a[i]);
		}
		for(int k=0;k<y;k++){
			scanf("%d", &b[k]);
		}
		printf("Test %d:", h);
		printf("\n");
		for(int i=0;i<=p-1;i++){
			printf("%d ", a[i]);
		}
		for(int k=0;k<y;k++){
			printf("%d ", b[k]);
		}
		for(int i=p;i<x;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	} 
}
	

