#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char viethoa(char c){//chuyen thuong sang hoa
	if(c>='a'&&c<='z'){
		c=c-32;
	}
	return c;
}
char vietthuong(char c){//chuyen tu hoa sang thuong
	if(c>='A'&&c<='Z'){
		c=c+32;
	}
	return c;
}
void chuanhoatu(char c[]){//ham chuan hoa tung tu trong xau
	c[0]=viethoa(c[0]);//viet hoa chu cai dau tien
	for(int i=1;i<strlen(c);i++){
		c[i]=vietthuong(c[i]);//viet thuong cac chu cai ve sau
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];//20 dong, moi dong co 50 chu (Mang ki tu 2 chieu, moi dong luu 1 tu)
		char *token=strtok(c, " ");int n=0;// n: so tu
		while(token!= NULL){//tach tung tu trong ten
	        strcpy(a[n], token);
	        n++;
	        token=strtok(NULL, " ");
	    }
	    for(int i=0;i<n;i++){// in ra tung tu duoc chuan hoa
	    	chuanhoatu(a[i]);
	    	printf("%s ", a[i]);
	    }
		printf("\n");
	}
}
	

