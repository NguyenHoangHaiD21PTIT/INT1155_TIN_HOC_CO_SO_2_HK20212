#include<stdio.h>
#include<stdbool.h>
#include<math.h>
long long thayso(long long n){
	if(n==0||n==8||n==9){ 
	    n=0;
	} else if (n==1){
		n=1;
    }
	return n;
}
long long luythua(long long a, long long b){//a: co so, b: so mu
	long long tich=1;
	for(long long i=1;i<=b;i++){
		tich=tich*a;
	}
	return tich;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int check=1, mu=0; long long somoi=0;//Bien kiem tra dieu kien
		while(n>0){
			long long d1=n%10;
			if((d1!=0)&&(d1!=1)&&(d1!=8)&&(d1!=9)){
				check=0;
			    break;
			} else {
				somoi=somoi+pow(10,mu)*thayso(d1);
				mu++;
				n=n/10;
			}
		}
		if(somoi==0||check==0){
			printf("INVALID\n");
		} else {
			printf("%lld\n", somoi);
		}
	}
}
		
