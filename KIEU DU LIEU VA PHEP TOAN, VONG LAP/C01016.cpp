#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t>0){
		int n;
		scanf("%d", &n);
		for(int i = 2; i <=n; i++){
			while(n%i==0){
			    printf("%d ", i);
			    n=n/i;
			}
		}
		printf("\n");
		t--;
	}
}
	
