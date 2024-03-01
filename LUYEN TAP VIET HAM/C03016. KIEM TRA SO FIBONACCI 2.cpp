#include<stdio.h>
#include<math.h>
#include<stdbool.h>
long long fibonacci(long long n) {
    long long f0 = 0;
    long long f1 = 1;
    long long fn;
    if (n == 0 || n == 1) {
        return n;
    } else {
        for (long long i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }
    return fn;
}
bool checkF(long long n) {
	int dem = 0;
   	for (long long i = 0; fibonacci(i) <= n; i++) {
        	if(fibonacci(i)==n){
            		return true;
            		break;
        	}
   	 }
	return false;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(checkF(n)==true){
		    printf("YES\n");
		} else {
		    printf("NO\n");
		}
	}
}
