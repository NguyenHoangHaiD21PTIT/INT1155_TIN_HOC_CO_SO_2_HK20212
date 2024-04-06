#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int dem[10000]={};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(dem[a[i]]){
		    printf("%d %d\n",a[i], dem[a[i]]);
		    dem[a[i]]=0;// sau khi xong 1 so thi reset la 0	
	    }
	}
}