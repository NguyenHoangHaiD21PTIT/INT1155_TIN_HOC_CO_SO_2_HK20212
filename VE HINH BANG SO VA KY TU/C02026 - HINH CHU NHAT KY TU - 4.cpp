#include<stdio.h>
int main(){//64
	int hang, cot;
	scanf("%d%d", &hang, &cot);
	for(int i=1;i<=hang;i++){
		if(hang-i+1>cot){
			for(int j=1;j<=cot;j++){
		        printf("%c", 64+cot);
		    }
		} else {//hang-i+1: So phan tu tam giac tren goc phai, cot-(hang-i+1): so phan tu tam giac duoi goc trai
			for(int j=1;j<=cot-(hang-i+1);j++){//Ve tam giac duoi phai
			    printf("%c", 64 +j+(hang-i));//hang-i: Do chenh lech giua hang cuoi va hang dang xet
			} 
			for(int k=1;k<=hang-i+1;k++){
				printf("%c", 64+cot);
			}
		}
		printf("\n");
	}
}
