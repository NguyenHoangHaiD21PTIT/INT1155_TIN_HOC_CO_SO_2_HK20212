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
		int dem=0, min=2e9;
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]<min){
				min=a[i]-a[i-1];
				dem=1;
			} else if(a[i]-a[i-1]==min){
				dem++;
			}
		}
		printf("%d %d", min,dem);
		printf("\n");
	}
}
