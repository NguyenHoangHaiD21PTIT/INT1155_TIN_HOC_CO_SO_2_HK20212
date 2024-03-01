#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check(int n){
	for(int i = 2; i<= sqrt(n); i++){
		if(n%i==0) return false;
	} 
	return n>1;
}
	
int main(){
	int n;
	scanf("%d", &n);
	int dem=0;
	for(int i = 2; dem<n;i++){
		if(check(i)==true){
			printf("%d\n", i);
			dem++;
		}
	}
}
