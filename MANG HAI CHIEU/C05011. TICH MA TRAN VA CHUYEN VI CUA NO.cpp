#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int k=1;k<=t;k++){
		int a[100][100];
		int b[100][100];// Ma tran B dung de chuyen vi
		int c[100][100];// Ma tran C la ma tran tich
		c[100][100]={};// ban dau gia tri cac phan tu trong c la 0
		int hang,cot;
		scanf("%d%d", &hang, &cot);
		for(int i = 0; i < hang; i++){
		  	for(int j = 0; j < cot; j++){
		    	scanf("%d", &a[i][j]);
		  	}
		}
		for(int i = 0; i < hang; i++) { //con chay chi so hang cua A
		  	for(int j = 0; j < cot; j++) { //con chay chi so cot cua A
		   		b[j][i] = a[i][j];
		  	}
		}
		//VD: A 2x3 --> B3x2-->C:2X2(C la ma tran tich AxB)
		for(int i = 0; i < hang; i++) {//Con chay chi so hang C
			for(int j = 0; j < hang; j++) {//Con chay chi so cot C
		   		for(int l = 0; l < cot; l++) {
		    		c[i][j] += a[i][l] * b[l][j];
		   		}
		  	}
		}
		// VD: Ma tran A 2x3 thi chuyen vi la B 3x2.
		/*ptu C11=A11.B11+A12.B21+A13.B31; C21=A21.B11+A22.B21+A23.B31
		       C12=A11.B12+A12.B22+A13.B32  C22=A21.B21+A22.B22+A23.B32
			   (Ptu dong i cot j cua C=tich vo huong dong i cua a x cot j cua B)*/
		printf("Test %d: ", k);
		printf("\n");
		for(int i = 0; i < hang; i++) {
		  	for(int j = 0; j < hang; j++) {
		   		printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
}

