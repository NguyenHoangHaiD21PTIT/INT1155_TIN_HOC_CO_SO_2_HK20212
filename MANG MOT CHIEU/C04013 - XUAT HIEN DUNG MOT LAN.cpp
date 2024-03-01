#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int dem[10000]={};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;//mang dem tim den dung so co chi so de tang
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(dem[a[i]]==1){
			count++;
	    }
	}
	printf("%d\n", count);
	for(int i=0;i<n;i++){
		if(dem[a[i]]==1){
		    printf("%d ",a[i]);
		    dem[a[i]]=0;// sau khi xong 1 so thi reset la 0	
	    }
	}	
}

