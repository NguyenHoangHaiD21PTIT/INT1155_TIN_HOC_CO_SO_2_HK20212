#include<stdio.h>
#include<stdbool.h>
bool check(long long a){
	int k = a % 10;a=a/10;
	while(a>0){
		if (a%10<=k) return false;
	  	k=a%10;
	  	a=a/10;
	}
	return true;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, dem=0;
		scanf("%d%d", &a, &b);
		for(int i=a;i<=b;i++){
			if(check(i)==1) dem++;
		}
		printf("%d\n", dem);
	}
}
