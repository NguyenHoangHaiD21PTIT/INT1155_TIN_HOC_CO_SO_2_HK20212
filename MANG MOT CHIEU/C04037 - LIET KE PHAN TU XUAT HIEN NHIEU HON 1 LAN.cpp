#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int dem1[1000]={};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		dem1[a[i]]++;
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(dem1[a[i]]>1){
		    count++;
		    dem1[a[i]]=0;
	    }
	}
	printf("%d\n", count);
	int dem2[1000]={};
	for(int i=0;i<n;i++){
		dem2[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(dem2[a[i]]>1){
		    printf("%d ", a[i]);
		    dem2[a[i]]=0;
	    }
	}
}


