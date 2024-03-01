#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char viethoa(char c){
	if(c>='a'&&c<='z'){
		c=c-32;
	}
	return c;
}
char vietthuong(char c){
	if(c>='A'&&c<='Z'){
		c=c+32;
	}
	return c;
}
char *strupr(char c[]){//Viet hoa tat ca cac tu trong xau
	for(int i=0;i<strlen(c);i++){
		c[i]=viethoa(c[i]);
	}
	return c;
}
void chuanhoatu(char c[]){//ham chuan hoa tung tu trong xau
	c[0]=viethoa(c[0]);//Viet hoa chu cai dau tien
	for(int i=1;i<strlen(c);i++){
		c[i]=vietthuong(c[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		char *token=strtok(c, " ");int n=0;// n: so tu
		while(token!= NULL){//tach tung tu trong ten
	        strcpy(a[n], token);
	        n++;
	        token=strtok(NULL, " ");
	    }
	    for(int i=1;i<n;i++){
	        chuanhoatu(a[i]);//Chuan hoa tat ca cac tu tru ho cua nguoi do
	        printf("%s", a[i]);
	        if(i==n-1){
	        	printf(", ");
	        } else {
	        	printf(" ");
	        }
	    }
		strupr(a[0]);
	    printf("%s ", a[0]);
		printf("\n");
	}
}
