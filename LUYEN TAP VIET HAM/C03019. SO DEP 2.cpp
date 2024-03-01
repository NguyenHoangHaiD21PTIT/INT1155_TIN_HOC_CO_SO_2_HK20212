#include<stdio.h>
#include<math.h>
long long sodao(long long n){
	long long dao = 0;
    while(n > 0){
        long long cuoi = n % 10; 
        n /= 10; 
        dao = dao * 10 + cuoi; 
    }
    return dao;
}
long long tongcs(long long n){
	long long tong = 0;
	while(n>0){
		tong = tong + n%10;
		n=n/10;
	}
	return tong;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long dem = 0;
		long long k = pow(10, n-1);
		long long h = pow(10, n)-1;
		for(long long i=k;i<=h;i++){
			if(sodao(i)==i&&tongcs(i)%10==0){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}
	
