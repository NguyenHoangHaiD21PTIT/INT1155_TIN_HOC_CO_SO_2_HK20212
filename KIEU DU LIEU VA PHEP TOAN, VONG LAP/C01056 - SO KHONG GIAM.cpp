#include<stdio.h>
#include<stdbool.h>
bool check(long long a){
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
	int t;
	scanf("%d", &t);
	while(t>0){
		long long n;
		scanf("%lld", &n);
		if(check(n)==true){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		t--;
	}
}

