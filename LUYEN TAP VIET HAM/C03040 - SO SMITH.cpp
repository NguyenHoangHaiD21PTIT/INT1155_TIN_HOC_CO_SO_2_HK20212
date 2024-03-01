#include<stdio.h>
int tongcs(int n){//tinh tong chu so
	int tong =0;
	while(n>0){
		tong=tong+n%10;
		n=n/10;
	}
	return tong;
}
int tongthuasont(int n){
	int tong=0;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			tong=tong+tongcs(i);
			n=n/i;
		}
	}
	return tong;
}
int main(){
	int n;
	scanf("%d", &n);
	if(tongcs(n)==tongthuasont(n)){
		printf("YES");
	} else {
		printf("NO");
	}
}
