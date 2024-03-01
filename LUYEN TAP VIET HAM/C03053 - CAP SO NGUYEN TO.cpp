#include<stdio.h>
#include<math.h>
bool check(int n){
	for(int i1=2;i1<=sqrt(n);i1++){
	    if(n%i1==0){
	        return false;
	    } 
	}
	return true;
}
	
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2;i<=n/2;i++){
		if(check(i)==true&&check(n-i)==true){
		    printf("%d %d ", i, n-i);
		}
	}
}
	
