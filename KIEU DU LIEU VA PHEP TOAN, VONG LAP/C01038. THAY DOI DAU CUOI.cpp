#include<stdio.h>
#include<math.h>
int csdau(int n){
	int tmp;
	while(n>0){
		tmp = n%10;
		n=n/10;
	}
	return tmp;
}
int socs(int n){
	int so = 0;
	while(n>0){
		so++;
		n=n/10;
	}
	return so;
}
int main(){
    int n;
	scanf("%d", &n);
	int nx=n%10; // Chu so hang don vi
	int n0=pow(10,socs(n)-1); // 10 mu(so chu so - 1)
	int n1=n%n0;//loai chu so dau tien
	int n2=n1/10;// Loai chu so cuoi cung
	if(nx==0){
		printf("%d%d", n2, csdau(n));
	} else {
    	printf("%d%d%d", nx, n2, csdau(n));
    }
}
	
