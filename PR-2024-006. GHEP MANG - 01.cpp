#include<stdio.h>
void sxTang(int a[], int n){
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
void sxGiam(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]<a[j]){
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
	while(t--){
		int m, n; char x;
		scanf("%d %d %c", &m, &n, &x);
		int a[m], b[n], merged[m + n];
		for(int i = 0;i<m;i++) scanf("%d", &a[i]);
		for(int i = 0;i<n;i++) scanf("%d", &b[i]);
		if(x=='A'){
			for(int i = 0;i<n;i++) printf("%d ", b[i]);
			for(int i = 0;i<m;i++) printf("%d ", a[i]);
		} else {
			for (int i = 0; i < m; i++) merged[i] = a[i];
        	for (int i = 0; i < n; i++) merged[i + m] = b[i];
        	if (x=='T') sxTang(merged, m + n);
        	if (x=='G') sxGiam(merged, m + n);
        	for (int i = 0; i < m + n; i++) printf("%d ", merged[i]);
		}
		printf("\n");
	}
}