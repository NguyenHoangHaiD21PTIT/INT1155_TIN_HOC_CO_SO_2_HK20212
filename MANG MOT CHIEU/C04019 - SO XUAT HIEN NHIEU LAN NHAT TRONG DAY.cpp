#include<stdio.h>
int main(){
int t;
scanf("%d", &t);
while(t--){
	int n;
	scanf("%d", &n);
	int a[n], dem[150]={}, max=0;// mang dem de dem so lan xuat hien
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(dem[a[i]]>max)  max=dem[a[i]];
	}
	for(int i=0;i<n;i++){
		if(dem[a[i]]==max) printf("%d ", a[i]);
		dem[a[i]]=0;
	}
printf("\n");
}
}
	
	    
