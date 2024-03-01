#include<stdio.h>
#include<string.h>
void dao(int c[], int n){
	int l=0, r=n-1;//l: can trai, r: can phai
	while(l<r){
		int tmp=c[l];
		c[l]=c[r];
		c[r]=tmp;
		l++;
		r--;
	}
}
void phepcong(char a[], char b[]){//ham phep cong
    int n1=strlen(a);
    int n2=strlen(b);
    int x[n1], y[n1], z[n1+1];//x, y: mang luu cac so trong a, b; z: mang luu cac so trong tong
    for(int i=0;i<n1;i++){
    	x[i]=a[i]-'0';
    }
    for(int i=0;i<n2;i++){
    	y[i]=b[i]-'0';
    }
    dao(x,n1);dao(y,n2);
    for(int i=n2;i<n1;i++){
    	y[i]=0;
    }
    int n=0, nho=0;//n: so chu so trong phep cong(n=n1 or n=n1+1; nho: bien nho)
    int tmp;
    for(int i=0;i<n1;i++){
        tmp = x[i]+y[i]+nho;
        z[n++]=tmp%10;
        nho=tmp/10;
    }
    if(nho==1){
    	z[n++]=nho;
    }
    for(int i=n-1;i>=0;i--){
    	printf("%d", z[i]);
    }
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
    	char x1[600];
    	gets(x1);
    	char x2[600];
    	gets(x2);
    	if(strlen(x1)>=strlen(x2)){
	    	phepcong(x1,x2);
    	} else {
    		phepcong(x2,x1);
    	}
    	printf("\n");
    }
}
