#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int tong(int n){
	int tongu = 0;
	for(int i = 1; i<=n/2;i++){
	    if(n % i == 0) {
	        tongu = tongu+i;
	    }
	}
	return tongu;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<= n; i++){
		if(tong(i)==i){
		    printf("%d ", i);
		}
	}
}
