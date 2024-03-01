#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n;i++){//Tung dong
	    for(int k = 1; k <= (n-i);k++){//Dong thu i co n-i dau ~
	        printf("~");
	    }
	    for(int j = 1; j<=2*i-1;j++){//Dong thu i co 2*i-1 so
	        if(i==j){//chi so phan tu trong dong > STT dong
	            printf("%d", 2 * i - 1)	;
	        } else if (j< i){
	            printf("%d", 2 * j - 1);
	        } else if (j> i){
	            printf("%d", 2 * (i - (j%i)) - 1);
	        }
	    }
		printf("\n");
	}
}
