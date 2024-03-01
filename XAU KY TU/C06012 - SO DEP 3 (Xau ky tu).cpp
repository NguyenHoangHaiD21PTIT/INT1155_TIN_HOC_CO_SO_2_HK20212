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
int check2(char a[]){//Dieu kien nguyen to
	for(int i=0;i<strlen(a);i++){
		if(a[i]!='2'&&a[i]!='3'&&a[i]!='5'&&a[i]!='7'){
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
		char c[550];
		gets(c);
		if(check1(c)==1&&check2(c)==1){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
