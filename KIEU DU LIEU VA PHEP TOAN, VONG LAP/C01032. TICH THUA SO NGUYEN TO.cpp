#include<stdio.h>
int tichThuaSoNT(int n1){
	int ans = 1, n = n1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0) n/=i;
			ans*=i;
		}	
	}
	if(n>1) ans*=n;
	return ans;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", tichThuaSoNT(n));
	}
}