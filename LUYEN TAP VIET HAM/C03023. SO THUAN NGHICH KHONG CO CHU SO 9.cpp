#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int sodao(int n){
    int dao = 0;
    while(n > 0){
        int cuoi = n % 10; 
        n /= 10; 
        dao = dao * 10 + cuoi; 
    }
    return dao;
}
bool check(int n){
	if(n%10==9){
		return false;
	} else {
	  	while(n>0){
		  	int n1=n%10;
		  	if(n1==9){
		  		return false;
		  	}
		  	n=n/10;
		}
		return true;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int dem=0;
	for(int i=2;i<=n;i++){
		if(sodao(i)==i&&check(i)==true){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n");
	printf("%d", dem);
}
