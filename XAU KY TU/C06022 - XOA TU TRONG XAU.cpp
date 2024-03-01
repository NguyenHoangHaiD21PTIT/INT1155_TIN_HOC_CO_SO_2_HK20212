#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char vietthuong(char c){
	if(c>='A'&&c<='Z'){
		c=c+32;
	}
	return c;
}

/*De so sanh 2 tu co trung nhau hay khong (bat ke hoa thuong) 
chuan hoa thanh chu thuong/hoa het*/
int sosanh (char a[], char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1!=n2){
		return 0;//2 xau co chieu dai khac nhau thi khoi so sanh
	} else { //So sanh tung phan tu viet thuong o 2 xau
	    for(int i=0;i<n1;i++){
	    	if(vietthuong(a[i])!=vietthuong(b[i])) return 0;
	    }
	return 1;//duyet het vong, cac tu giong nhau-->ket luan dung
    }
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for(int h=1;h<=t;h++){
		char s1[250]; char s2[30];//xau s1 la xau ban dau, xau s2 gom 1 tu
		gets(s1);
	    gets(s2);
		int a[20][50];
		char *token=strtok(s1, " "); 
		printf("Test %d: ", h);
		while(token!= NULL){
			if(sosanh(token,s2)==0){ printf("%s ", token);}
			token=strtok(NULL, " ");//tach tiep
		}
		printf("\n");
	}
}

	
		
	
