#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char vietthuong(char c){
	if(c>='A'&&c<='Z'){
		c=c+32;
	}
	return c;
}
char strlwr(char c[]){//Viet thuong tat ca cac tu trong xau
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
    int dem[50]={};
    for(int i=0;i<n;i++){
    	if(dem[i]==0){//tu o vi tri i chua duoc in ra
    	    int cnt=1;
    	    for(int j=i+1;j<n;j++){
    	    	if (strcmp(a[i], a[j]) ==0){//so sanh tu o vi tri i va cac tu phia sau no
				    cnt++; 		
				    dem[j]=1;// De khong bi in lap--> reset
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
}
   
