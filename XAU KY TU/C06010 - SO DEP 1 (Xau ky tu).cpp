#include<stdio.h>
#include<string.h>
int check1(char a[]){//Dieu kien xau thuan nghich
	for(int i=0;i<strlen(a)/2;i++){
		if(a[i]!=a[strlen(a)-i-1]){
			return 0;
		    break;
		}
	}
	return 1;
}
int check2(char a[]){//dieu kien full chan
	for(int i=0;i<strlen(a);i++){
		if((a[i]-'0')%2==1){
			return 0;
		    break;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[530];
		gets(a);
		if(check1(a)==1&&check2(a)==1){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
	
