#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char c[1000];
	gets(c);
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
    	    for(int j=i+1;j<n;j++){
    	    	if (strcmp(a[i], a[j]) ==0){//so sanh tu o vi tri i va cac tu phia sau no	
				    dem[j]=1;// Da in roi
                }
            }
            printf("%s ", a[i]);
        }
    }
}
   
