#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if((n>= 1 && n <= 2)||(n > 2 && n<145)){
		printf("1 2");
	} else if (n >= 145 && n<40585){
		printf("1 2 145");
	} else if (n>=8128){
		printf("1 2 145 40585");
	}
}

