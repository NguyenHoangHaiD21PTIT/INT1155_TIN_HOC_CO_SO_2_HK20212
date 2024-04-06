#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
bool isPrime(long long n){
    if(n<=1) return 0;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
long long check(char s[]){
	for(int i = 0;i<strlen(s);i++){
		long long tong = 0;
		for(int j = i + 1;j<strlen(s);j++) tong = tong * 10 + (s[j] - '0');
		for(int j = 0;j<=i;j++) tong = tong * 10 + (s[j] - '0');
		if(!isPrime(tong)) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	int res[t];
	for(int i=0;i<t;i++){
		char a[530];
		scanf("%s", a);
		res[i] = check(a);
	}
	for(int i = 0;i<t;i++) printf("%d ", res[i]);
}