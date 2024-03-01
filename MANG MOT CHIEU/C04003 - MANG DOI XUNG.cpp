#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int check=1;//Bien kiem tra tinh doi xung
		for(int i=0;i<=n/2;i++){
			if(a[i]!=a[n-1-i]){
				check=0;
				break;
			}
		}
		if(check==1){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
