#include<stdio.h>
int giaithua(int n){
	int gt=1;
	for(int i=2;i<=n;i++){
		gt=gt*i;
	}
	return gt;
}
int kq(int n){
	int x=n, tong =0;
	while(n>0){
		tong = tong +giaithua(n%10);
		n=n/10;
	}
	if(tong ==x){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
    for(int i=a;i<=b;i++){
    	if(kq(i)==1){
    		printf("%d ", i);
    	}
    }
}
	
