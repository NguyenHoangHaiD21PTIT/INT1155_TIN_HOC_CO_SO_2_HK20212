#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(int a){
	int k = a % 10;
	a=a/10;
	while(a>0){
	  	if (a%10>k) return false;
	  	k=a%10;
	  	a=a/10;
	}
	return true;
}
	
int main(){
	int n;
	scanf("%d", &n);
    for(int i = pow(10,n-1); i<=pow(10,n);i++){
		if(check(i)==true){
			printf("%d ", i);
		}
	}
}

