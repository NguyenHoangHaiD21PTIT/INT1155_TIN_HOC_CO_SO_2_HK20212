#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check(int n){
	if(n%10==6){
		return true;
	} else {
	  	while(n>0){
		    int n1=n%10;
		    if(n1==6){
		     	return true;
		    }
		    n=n/10;
	    }
	    return false;
	}
}
int dao(int n){
    int sodao = 0; 
    while(n > 0){
        int cuoi = n % 10; 
        n /= 10; 
        sodao = sodao * 10 + cuoi; 
    }
    return sodao;
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
		int tmp =a;
		a=b;
		b=tmp;
	}
	int dem =0;
	for(int i=a; i<=b;i++){
		if(check(i)==true&&(tongcs(i)%10==8)&&(dao(i)==i)){
			printf("%d ", i);
		}
	}
}
	
