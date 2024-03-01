#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct tu{
	char xau[500];
	int tanso;
};
typedef struct tu tu;
int check(char a[]){//Dieu kien xau thuan nghich
	for(int i=0;i<strlen(a)/2;i++){
		if(a[i]!=a[strlen(a)-i-1]){
			return 0;
		    break;
		}
	}
	return 1;
}
//Ham tim xem xau co trong mang chua, co roi thi tra chi so, ko thi -1
int timkiem(tu a[], int n, char c[]){
	for(int i=0;i<n;i++){
		if(strcmp(c,a[i].xau)==0){
			return i;
		}
	}
	return -1;
}
int main(){
    tu a[100001];
    char x[100]; int n=0;//n la so tu trong mang khac nhau
    while(scanf("%s",&x)!=-1){
    	if(check(x)==1){
	        int chiso=timkiem(a,n,x);
	        if(chiso!=-1){
		        a[chiso].tanso++;
	        } else {
		        strcpy(a[n].xau, x);
		        a[n].tanso=1;
		        n++;
		    }
	    }
	}
    int max=0;
	for(int i=0;i<n;i++){
		if(strlen(a[i].xau)>max){
			max=strlen(a[i].xau);
		}
	}
	for(int i=0;i<n;i++){
		if(strlen(a[i].xau)==max){
			printf("%s %d", a[i].xau, a[i].tanso);
			printf("\n");
		}
	}
}
 
