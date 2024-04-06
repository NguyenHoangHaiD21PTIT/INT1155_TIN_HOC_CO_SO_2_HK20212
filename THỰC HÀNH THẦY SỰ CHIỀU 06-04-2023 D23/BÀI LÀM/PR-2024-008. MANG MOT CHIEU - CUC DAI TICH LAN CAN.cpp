#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long a[n];
		long long res = -99999999;
		for(int i = 0;i<n;i++) scanf("%lld", &a[i]);
		for(int i = 0;i<n - 1;i++){
			if(a[i]*a[i + 1]>res) res = a[i] *a[i + 1];
		}
		printf("%lld\n", res);
	}
	return 0;
}