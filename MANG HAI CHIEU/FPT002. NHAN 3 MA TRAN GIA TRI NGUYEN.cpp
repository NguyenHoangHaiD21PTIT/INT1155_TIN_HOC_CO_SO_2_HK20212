#include<stdio.h>
int main(){
	int a[100][100];
	int b[100][100];
	int c[100][100]={};//Ma tran tich AxB
	int d[100][100];//Ma tran thu 3
	int e[100][100]={};//Ma tran tich sau cung
	int hanga,cota, cotb, cotd;//cota=hangb, cotb=hangd
	scanf("%d%d%d%d", &hanga, &cota, &cotb, &cotd);
	for(int i=0;i<hanga;i++){
		for(int j=0;j<cota;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0;i<cota;i++){
		for(int j=0;j<cotb;j++){
			scanf("%d", &b[i][j]);
		}
	}
	//Ma tran A MxN, B la NxP thi AxB la MxP
	for(int i=0;i<cotb;i++){
		for(int j=0;j<cotd;j++){
			scanf("%d", &d[i][j]);
		}
	}
	for(int i=0;i<hanga;i++){
		for(int j=0;j<cotb;j++){//2 dong i, j the hien kich thuoc C=AxB
			for(int k=0;k<cota;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<hanga;i++){
		for(int j=0;j<cotd;j++){//Kich thuocE=axbxd=exd
		    for(int k=0;k<cotb;k++){
				e[i][j]+=c[i][k]*d[k][j];
			}
		}
	}
	for(int i=0;i<hanga;i++){
		for(int j=0;j<cotd;j++){
			printf("%d ", e[i][j]);
		}
		printf("\n");
	}
}


