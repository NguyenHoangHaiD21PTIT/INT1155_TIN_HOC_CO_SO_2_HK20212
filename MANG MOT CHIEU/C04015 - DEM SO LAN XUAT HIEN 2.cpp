#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int k=1;k<=t;k++){
		int n;
		scanf("%d", &n);
		int a[n];
		int dem[1000]={};
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			dem[a[i]]++;//mang dem tim den dung so co chi so i de tang
		}
		printf("Test %d:", k);
		printf("\n");
		for(int i=0;i<n;i++){
			if(dem[a[i]]>0){
			    printf("%d xuat hien %d lan",a[i],dem[a[i]]);
			    printf("\n");
			    dem[a[i]]=0;// sau khi xong 1 so thi reset la 0	
		    }
		}
	}
}
