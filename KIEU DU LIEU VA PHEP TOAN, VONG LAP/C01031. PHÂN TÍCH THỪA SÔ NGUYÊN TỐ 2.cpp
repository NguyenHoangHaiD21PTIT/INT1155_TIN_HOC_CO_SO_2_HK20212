#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=2;i<=sqrt(n);i++){
		while(n>1){
			if(n%i==0){
				printf("%d", i);
				if(n!=i){
					printf("x");
				}
			n=n/i;
			} else {
			    i++;
			}
		}
	}
	}
