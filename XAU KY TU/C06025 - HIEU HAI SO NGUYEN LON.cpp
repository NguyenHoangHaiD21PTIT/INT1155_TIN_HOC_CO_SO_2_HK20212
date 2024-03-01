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
void pheptru(char a[], char b[]){//ham phep tru, a la so lon b la so be
    int n1=strlen(a);
    int n2=strlen(b);
    int x[n1], y[n1], z[n1];//x, y: mang luu cac so trong a, b; z: mang luu cac so trong hieu
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
    int n=0, muon=0;//n: so chu so trong phep tru(n=n1 or n=n1-1; muon: bien muon)
    int tmp;
    for(int i=0;i<n1;i++){
        tmp = x[i] - y[i]- muon;
        if(tmp<0){
        	muon=1;
        	z[n++]=tmp+10;
        } else {
        	muon=0;
        	z[n++]=tmp;
        }
    }
    int h1, check=0;//h1: bien danh dau, check: gia su ban dau tat cac so deu la 0
    for(int i=n-1;i>=0;i--){
    	if(z[i]!=0){
    		h1=i;
    		check=1;
    		break;
    	}
    }
    if(check==0){
    	printf("0");
    } else {
    	for(int i=h1;i>=0;i--){
    		printf("%d",z[i]);
    	}
    }
} 
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
    	char x1[1100];
    	gets(x1);
    	char x2[1100];
    	gets(x2);
    	if(strlen(x1)>strlen(x2)||(strlen(x1)==strlen(x2)&&strcmp(x1,x2)>0)){
	    	pheptru(x1,x2);
    	} else {
    		pheptru(x2,x1);
    	}
    	printf("\n");
    }
}
