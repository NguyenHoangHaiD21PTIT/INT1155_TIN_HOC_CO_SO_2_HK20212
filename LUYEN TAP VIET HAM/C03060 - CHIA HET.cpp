//Kiem tra n! co chia het cho 2^k hay khong
#include<stdio.h>
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int dem=0;
	for(int i=1;i<=n;i++){
		int tmp=i;
		while(tmp%2==0){
		    dem++;
			tmp=tmp/2;
		}
	}
	if(dem>=k){
		printf("Yes");
	} else {
		printf("No");
	}
}
	
