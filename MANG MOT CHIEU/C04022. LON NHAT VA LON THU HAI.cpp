#include<stdio.h> 
int main(){ 
	int n; 
	scanf("%d",&n); 
	int a[n];
	for(int i=0;i<n;i++){ 
	   scanf("%d",&a[i]); 
	} 
	int max = a[0]; 
	for(int i=0;i<n;i++){ 
	    if(a[i]>max){ 
	       max = a[i]; 
		} 
	} 
	int max2 = -999999999; 
	for(int i=0;i<n;i++){ 
	   	if(a[i]>max2 && a[i]<max){ 
	      	max2 = a[i]; 
		} 
	} 
	printf("%d %d",max,max2); 
} 
