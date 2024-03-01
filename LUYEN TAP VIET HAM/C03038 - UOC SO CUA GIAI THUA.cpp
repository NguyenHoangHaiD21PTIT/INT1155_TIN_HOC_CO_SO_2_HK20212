//Tim x min de n! chia het cho p^x
#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, p=2;
		scanf("%d", &n);
		int dem=0;
		for(int i=1;i<=n;i++){
			int tmp=i;
			while(tmp%p==0){
		        dem++;
				tmp=tmp/p;
			}
		}
		printf("%d\n", dem);
	}
}		
