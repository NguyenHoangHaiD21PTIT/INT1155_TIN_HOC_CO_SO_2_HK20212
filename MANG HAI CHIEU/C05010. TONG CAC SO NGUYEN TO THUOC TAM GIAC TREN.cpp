#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(int n){
	if(n<=1){
		return false;
	} else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
	   	for(int j=0;j<n;j++){
	    	scanf("%d", &a[i][j]);
	    }
	}
	int tong = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		    if(i<=j&&check(a[i][j])==true){
		    tong=tong+a[i][j];
		    }
		}
	}
	printf("%d", tong);
}
	

