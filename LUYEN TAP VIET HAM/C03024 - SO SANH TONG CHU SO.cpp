#include<stdio.h>
int tongcs(int n){
	int tong =0;
	while(n>0){
		tong = tong + n%10;
		n=n/10;
	}
	return tong;
}
	
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(tongcs(a)==tongcs(b)){
		printf("%d %d", a, b);
	} else if (tongcs(a)<tongcs(b)){
		printf("%d %d", a, b);
	} else if (tongcs(a)>tongcs(b)){
		printf("%d %d", b, a);
	}
}
