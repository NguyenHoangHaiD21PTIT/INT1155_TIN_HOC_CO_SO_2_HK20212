#include<stdio.h>
#include<string.h>
int main(){
	char c[15];
	gets(c);
	int dem[15]={};
	for(int i=0;i<strlen(c);i++){
		dem[c[i]-'0']++;
	}
	for(int i=0;i<strlen(c);i++){
		if((c[i]=='2'||c[i]=='3'||c[i]=='5'||c[i]=='7')&&(dem[c[i]-'0']>0)){
			printf("%c %d", c[i], dem[c[i]-'0']);
			printf("\n");
			dem[c[i]-'0']=0;
		}
	}
}
		
