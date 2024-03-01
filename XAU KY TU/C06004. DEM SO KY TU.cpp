#include<stdio.h>
#include<string.h>
int main(){
	char s[201];
	gets(s);
	int sochucai=0, sochuso=0;
	for(int i=0;i<strlen(s);i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			sochucai++;
		} else if (s[i]>='0'&&s[i]<='9'){
			sochuso++;
        }
	}
    int sokitu = strlen(s)-sochucai-sochuso;
    printf("%d %d %d", sochucai, sochuso, sokitu);
}
