/* Diem trung tam
Ta coi moi dong gom 2 so la mot cap so, thuc chat la di kiem tra n-1 diem nay 
co thang hang voi nhau hay khong (vt: vector)
A(xA,yA), B(xB, yB), C(xC,yC)
vtBA(xA-xB;yA-yB), vtBC=(xC-xB;yC-yB);
A,B, C thang hang: vtBA=k.vtCB-->(xA-xB)(yC-yB)=(yA-yB)(xC-xB)*/
#include<stdio.h>
int kt(int xA, int yA, int xB, int yB, int xC, int yC){
	if((xA-xB)*(yC-yB)==(yA-yB)*(xC-xB)){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int x[100005], y[100005];//mang x luu toa do dau tien, mang y luu toa do thu 2
	for(int i=0;i<n-1;i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	int check=1;//gia su ban dau cac diem thang hang
	for(int i=0;i<n-3;i++){
		if(kt(x[i], y[i],x[i+1],y[i+1],x[i+2],y[i+2])==0){
			check=0;
			break;
		}
	}
	if(check==1){
		printf("Yes");
	} else {
		printf("No");
	}
}
