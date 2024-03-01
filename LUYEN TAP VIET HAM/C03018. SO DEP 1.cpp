#include<stdio.h>
#include<math.h>
int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn;
    if (n == 0 || n == 1) {
        return n;
    } else {
        for (int i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }
    return fn;
}
 
bool checkF(int n) {
	int dem = 0;
        for (int i = 0; fibonacci(i) <= n; i++) {
            if(fibonacci(i)==n){
        	dem++;
    	    }
        }
        if(dem==1){
    	     return true;
        } else {
    	     return false;
        }
}

bool checknt(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if (n%i==0) return false;
	}
	return n>1;
}
	
int tongcs(int n){
	int tong = 0;
	while(n>0){
		tong = tong + n%10;
		n=n/10;
	}
	return tong;
}
	
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i = a; i<=b;i++){
		if(checknt(i)==true&&checkF(tongcs(i))==true){
			printf("%d ", i);
		}
	}
}

   


	
