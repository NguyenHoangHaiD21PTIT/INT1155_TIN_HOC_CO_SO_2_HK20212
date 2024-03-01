#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool checknt(int n){
	if(n<=1){
		return false;
    } else {
	    for(int i = 2; i<=sqrt(n);i++){
	    	if(n%i==0){
	    		return false;
			}
		}
		return true;
	}
}
int sntthu(int n){
	int dem=0;
	int i=1;
	while(dem<n){
		i++;
		if(checknt(i)==true){
			dem++;
		}
	}
	return i;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d", &n);
		int a[n][n];
		int d= 0, giatri=1, hang=n-1, cot=n-1;
		while(d<=n/2){
			for(int i=d;i<=cot;i++)  a[d][i]=sntthu(giatri++);
			for(int i=d+1;i<=hang;i++)  a[i][cot]=sntthu(giatri++);
			for(int i=cot-1;i>=d;i--)  a[hang][i]=sntthu(giatri++);
			for(int i=hang-1;i>=d+1;i--)  a[i][d]=sntthu(giatri++);
			d++;hang--;cot--;
		}
		printf("Test %d: ", i);
		printf("\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
