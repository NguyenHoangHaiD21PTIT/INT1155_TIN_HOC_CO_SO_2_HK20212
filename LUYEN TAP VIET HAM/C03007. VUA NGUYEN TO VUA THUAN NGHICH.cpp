#include <stdio.h>
#include<math.h>
#include<stdbool.h>
bool check(int n){
	if(n<=1){
		return false;
	} else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return false;
			}
		}
	    return true;
	}
}
int sodao(int n){
	int dao=0;
	while(n>0){
		int cuoi=n%10;
		n=n/10;
		dao=dao*10+cuoi;
	}
	return dao;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int dem=0;
		for(int i=a;i<=b;i++){
			if(check(i)==true&&sodao(i)==i){
				printf("%d ", i);
				dem++;
				if(dem==10){
					printf("\n");
					dem=0;
				}
			}
		}
		printf("\n");
		printf("\n");
	}
}
	
