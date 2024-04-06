#include<stdio.h>
void sx(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for(int t1 = 1;t1<=t;t1++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i = 0;i<n;i++) scanf("%d", &a[i]);
		for(int i = 0;i<n;i++) scanf("%d", &b[i]);
		sx(a, n); sx(b, n);
		printf("Test %d: ", t1);
		printf("\n");
		for(int i = 0;i<n;i++) printf("%d %d ", a[i], b[n - i - 1]);
		printf("\n");
	}
}