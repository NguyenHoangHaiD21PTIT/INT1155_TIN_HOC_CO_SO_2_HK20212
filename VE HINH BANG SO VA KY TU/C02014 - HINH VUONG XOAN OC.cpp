#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[2*n-1][2*n-1];
	int d= 0, giatri=n, hang=2*n-2, cot=2*n-2;
	while(d<=(2*n-1)/2){
		for(int i=d;i<=cot;i++) a[d][i]=giatri;
		for(int i=d+1;i<=hang;i++) a[i][cot]=giatri;
		for(int i=cot-1;i>=d;i--) a[hang][i]=giatri;
		for(int i=hang-1;i>=d+1;i--) a[i][d]=giatri;
		d++;hang--;cot--;giatri--;
	}
	for(int i=0;i<2*n-1;i++){
		for(int j=0;j<2*n-1;j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

