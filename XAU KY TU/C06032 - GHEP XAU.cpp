#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sosanh(const void*a, const void*b){
	char x[100], y[100], z[100], t[100];
	strcpy(x, (char*)a); strcpy(z, x);
	strcpy(y, (char*)b); strcpy(t, y);
	strcat(x, y);
	strcat(t, z);
	if(strcmp(x, t)<0){
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
		char a[n][110];
		for(int i=0;i<n;i++){
			scanf("%s", a[i]);
		}
	    qsort(a, n, sizeof(a[0]), sosanh);
		for(int i=0;i<n;i++){
			printf("%s", a[i]);
		}
	    printf("\n");
	}
}
					
