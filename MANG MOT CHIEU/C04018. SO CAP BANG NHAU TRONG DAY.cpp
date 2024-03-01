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
		int dem=0;
		for(int i=0;i<n;i){
		    int j=i+1;
		    if(a[i]!=a[j]){
		        i++;
		        j++;
		    } else {
			    while(i<n&&a[i]==a[j]){
			        dem++;
			        i=j;
			        j++;
			    }
			}
		}
		printf("%d", dem);
		printf("\n");
	}
}

