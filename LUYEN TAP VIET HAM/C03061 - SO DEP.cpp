#include<stdio.h>
#include<math.h>
#include<stdbool.h>
long long csdau(long long n){
	long long tmp;
	while(n>0){
		tmp = n%10;
		n=n/10;
	}
	return tmp;
	}
long long sodao(long long n){
	long long dao = 0;
    while(n > 0){
        long long cuoi = n % 10; 
        n /= 10; 
        dao = dao * 10 + cuoi; 
    }
    return dao;
}
long long socs(long long n){
	double a = log(10);
	double b = log(n);
	double c = (double)b/a;
	long long d = round(c) + 1;
	return d;
}
		
bool checkdaucuoi(long long n){
	long long nx=csdau(n);
	long long n0=n%10;
	double t1=n0/nx;
	double t2=nx/n0;
	if(t1==2.0||t2==2.0||(t1==2.0&&t2==2.0)){
		return true;
	} else if (t1!=0&&t2!=0){
		return false;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long n0=pow(10,socs(n)-1);
		long long n1=n%n0;
		long long n2=n1%10;
		if(sodao(n2)==n2&&checkdaucuoi(n)==true){ 
			printf("YES\n");
		} else {
			printf("NO\n");
		}	
	}
}
