#include<stdio.h>
int gthua(int n){
	int gt=1;
	for(int i = 1;i<=n;i++ ){
		gt=gt*i;
	}
	return gt;
}
	
bool check(int n){
	int a = n;
	int tong = 0;
	while(a>0){
		tong = tong + gthua(a%10);
		a=a/10;
	}
	if(tong == n){
		return true;
	} else {
		return false;
	}	
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n; i++){
		if(check(i)==true){
		printf("%d ", i);
		}
	}
}

