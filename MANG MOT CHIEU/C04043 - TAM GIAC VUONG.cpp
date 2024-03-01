#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a, const void*b){
	int *x=(int*)a;
	int *y=(int*)b;
	if(*x<*y){
		return -1;
	} else {
		return 1;
	}
}
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
		qsort(a,n,sizeof(int),cmp);
		long long b[n];
		for(int i=0;i<n;i++){
			b[i]=a[i]*a[i];
		}
		//Kiem tra bo ba so a=b+c
		int check=0;
		for(int i=n-1;i>=2;i--){//Gan giong binary search
			int trai=0, phai=i-1;
			while(trai<phai){
				if(a[trai]+a[phai]==a[i]){
					check=1;
					break;
				} else if(a[trai]+a[phai]<a[i]){
					trai++;
				} else {
					phai--;
				}
			}
		}
		if(check==1){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}

