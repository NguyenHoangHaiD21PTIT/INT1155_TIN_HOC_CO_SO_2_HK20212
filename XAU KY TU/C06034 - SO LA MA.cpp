#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d", &t);
getchar();
while(t--){
	int tong=0;	
	char xau[100];
	int so[100];
	gets(xau);
	for(int i=0; i<strlen(xau); i++){// chuyen chu ve gia tri so
		switch(xau[i]){
			case 'I':
				so[i]=1;
				break;
			case 'V':
				so[i]=5;
				break;
			case 'X':
				so[i]=10;
				break;
			case 'L':
				so[i]=50;
				break;
			case 'C':
				so[i]=100;
				break;
			case 'D':
				so[i]=500;
				break;
			case 'M':
				so[i]=1000;
				break; 
		} 
	} 
	for(int i=0; i<strlen(xau)-1; i++){
		if(so[i]<so[i+1]){
		    tong -= so[i];
		} else {
		    tong +=so[i]; 
		} 
	}// vi den so cuoi cung thi khong con so de so sanh nua
		tong += so[strlen(xau)-1];
		printf("%d\n", tong); 
	} 
}

