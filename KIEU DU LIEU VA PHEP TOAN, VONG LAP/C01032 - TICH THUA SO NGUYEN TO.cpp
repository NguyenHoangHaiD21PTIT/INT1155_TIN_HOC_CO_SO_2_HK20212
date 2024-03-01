#include<stdio.h>
int tichthuasont(int n){
	int tich1=1;
	for(int i=2;i<=n;i++){
		int dem=0, tich2=1;//tich2 la de lay ra i
		while(n%i==0){
			n=n/i;
			dem++;
			if(dem==1){
				tich2=tich2*i;
			}
		}
	tich1=tich1*tich2;
	}
return tich1;
}
int main(){
int t;
scanf("%d", &t);
while(t--){
	int n;
	scanf("%d", &n);
	printf("%d\n", tichthuasont(n));
}
}
