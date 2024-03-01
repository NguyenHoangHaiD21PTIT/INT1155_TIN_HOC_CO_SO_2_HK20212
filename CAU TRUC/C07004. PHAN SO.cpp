#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
// struct la kieu du lieu tu dinh nghia
long long UCLN(long long a, long long b){
    while(b!=0){
	    long long tmp=a%b;
	    a=b;
	    b=tmp;
    }
    return a;
}
long long BCNN(long long a, long long b) {
	return a*b/UCLN(a,b);
}
struct phanso {
	long long tu, mau;
};
typedef struct phanso ps;
ps rutgon(ps a) {
	long long mauchung = UCLN(a.tu, a.mau);
	a.tu = a.tu / mauchung;
	a.mau = a.mau/ mauchung;
	return a;
}
void quydongtongthuong(ps a, ps b){
	a = rutgon(a);
	b = rutgon(b);
	long long mauchung = BCNN(a.mau,b.mau);
		a.tu = a.tu * mauchung / a.mau;
		a.mau = mauchung;
		b.tu = b.tu * mauchung / b.mau;
		b.mau = mauchung;
		printf("%lld/%lld %lld/%lld\n",a.tu,a.mau,b.tu,b.mau);
	ps tong;
		tong.tu = a.tu + b.tu;
		tong.mau = mauchung;
		tong = rutgon(tong);
		printf("%lld/%lld\n",tong.tu,tong.mau);
	ps thuong;
		thuong.tu = a.tu * b.mau;
		thuong.mau = a.mau * b.tu;
		thuong = rutgon(thuong);
		printf("%lld/%lld\n",thuong.tu,thuong.mau);
}
int main() {
	int t;
	scanf("%d",&t);
	for(int i = 1 ; i <= t ;i++) {
		ps a,b;
		scanf("%lld%lld", &a.tu, &a.mau);
		scanf("%lld%lld", &b.tu, &b.mau);
		printf("Case #%d:\n",i);	
		quydongtongthuong(a,b);	
	}
}
