#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check1(char s[13]){//Kiem tra dieu kien tang chat
	if(s[6]<s[7]&&s[7]<s[8]&&s[8]<s[10]&&s[10]<s[11]){
		return true;
	} else {
		return false;
	}
}
bool check2(char s[13]){//Kiem tra dieu kien bang nhau
	if(s[6]==s[7]&&s[7]==s[8]&&s[8]==s[10]&&s[10]==s[11]){
		return true;
	} else {
		return false;
	}
}
bool check3(char s[13]){//Kiem tra dieu kien 3 so dau=nhau, 2 so cuoi=nhau
	if(s[6]==s[7]&&s[7]==s[8]&&s[10]==s[11]){
		return true;
	} else {
		return false;
	}
}
bool check4(char s[13]){//Loc phat
	if((s[6]=='6'||s[6]=='8')&&(s[7]=='6'||s[7]=='8')&&(s[8]=='6'||s[8]=='8')&&(s[10]=='6'||s[10]=='8')&&(s[11]=='6'||s[11]=='8')){
		return true;
	} else {
		return false;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[13];
		gets(s);
		if(check1(s)==true||check2(s)==true||check3(s)==true||check4(s)==true){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
