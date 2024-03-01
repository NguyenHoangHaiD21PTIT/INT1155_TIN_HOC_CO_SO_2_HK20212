#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*so sanh 2 tu co trung nhau hay khong */
int sosanh (char a[], char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1!=n2){
		return 0;//2 xau co chieu dai khac nhau thi khoi so sanh
	} else { //So sanh tung phan tu viet thuong o 2 xau
	    for(int i=0;i<n1;i++){
	    	if(a[i]!=b[i]) return 0;
	    }
	return 1;//duyet het vong, cac tu giong nhau-->ket luan dung
    }
}
int main(){
	char s1[250]; char s2[30];//xau s1 la xau ban dau, xau s2 gom 1 tu
	gets(s1);
    scanf("%s", s2);
	int a[20][50];
	char *token=strtok(s1, " "); 
	while(token!= NULL){
		if(sosanh(token,s2)==0) printf("%s ", token);
		token=strtok(NULL, " ");//tach tiep
	}
}
	
		
	
	
