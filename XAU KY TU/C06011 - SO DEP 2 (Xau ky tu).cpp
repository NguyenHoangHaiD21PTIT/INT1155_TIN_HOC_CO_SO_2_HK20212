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
int check2(char a[]){//Dieu kien bat dau ket thuc = so 8
    for(int i=0;i<strlen(a)/2;i++){
    	if(a[0]==a[strlen(a)-1]&&a[0]=='8'){
    		return 1;
    		break;
    	}
    }
	return 0;
}
int tongcs(char a[]){
	int tong=0;
		for(int i=0;i<strlen(a);i++){
			tong=tong+(a[i]-'0');
		}
	return tong;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[550];
		gets(c);
		if(check1(c)==1&&check2(c)==1&&tongcs(c)%10==0){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
		
