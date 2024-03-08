#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct tu{
	char xau[500];
	int tanso;
};
typedef struct tu tu;

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
	    int chiso=timkiem(a,n,x);
	    if(chiso!=-1){
		    a[chiso].tanso++;
	    } else {
		    strcpy(a[n].xau, x);
		    a[n].tanso=1;
		    n++;
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
			printf("%s %d %d", a[i].xau, strlen(a[i].xau), a[i].tanso);
			printf("\n");
		}
	}
}
 
