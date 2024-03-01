#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool checknt(int n){
	for(int i = 2; i<= sqrt(n);i++){
		if(n%i==0) return false;
	}
		return n>1;
}
bool check(int n){
	if (checknt(n)==false){
		return false;
	} else {
		while(n>0){
			int n1=n%10;
			if(checknt(n1)==false){
				return false;
			}
			n=n/10;
		}
		return true;
	}
}
	
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int dem = 0;
		for(int i = a; i<=b; i++){
			if(check(i)==true){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}
	
		
