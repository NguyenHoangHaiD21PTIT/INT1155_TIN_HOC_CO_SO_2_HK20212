#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char vietthuong(char c){
	if(c>='A'&&c<='Z'){
		c=c+32;
	}
	return c;
}
char *strlwr(char c[]){//Viet thuong tat ca cac tu trong xau
	for(int i=0;i<strlen(c);i++){
		c[i]=vietthuong(c[i]);
	}
	return c;
}
int main(){
    char c[1000];
	gets(c);
	strlwr(c);
	char a[20][50];
	char *token=strtok(c, " ");int n=0;// n: so tu
	while(token!= NULL){//tach tung tu trong ten
        strcpy(a[n], token);
        n++;
        token=strtok(NULL, " ");
    }
    
    for(int i=0;i<n-1;i++){
    	printf("%c", a[i][0]);
    }
	printf("%s", a[n-1]);//in ra ten
    printf("@ptit.edu.vn");
}
