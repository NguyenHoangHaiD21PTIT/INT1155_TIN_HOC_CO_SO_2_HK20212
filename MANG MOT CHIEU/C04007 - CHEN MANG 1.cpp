#include<stdio.h>
int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	int a[x], b[y];
	for(int i=0;i<x;i++){
		scanf("%d", &a[i]);
	}
	for(int k=0;k<y;k++){
		scanf("%d", &b[k]);
	}
	int p;
	scanf("%d", &p);
	for(int i=0;i<=p-1;i++){
		printf("%d ", a[i]);
	}
	for(int k=0;k<y;k++){
		printf("%d ", b[k]);
	}
	for(int i=p;i<x;i++){
		printf("%d ", a[i]);
	}
}
