#include<stdio.h>
#include<math.h>
int tongcs(int n){
	int tong = 0;
	while(n>0){
		tong = tong + n%10;
		n=n/10;
	}
	return tong;
	}
bool checknt(int n){
	if(n<=1){
    	return false;
    } else {
    	for(int i=2;i<=sqrt(n);i++){
	    	if(n%i==0){
	    		return false;
	    	}
    	}
    	return true;
    }
}
int main(){
	int n;
	scanf("%d", &n);
	int dem =0;
	for(int i=2;i<=n;i++){
		if(tongcs(i)%5==0&&checknt(i)==true){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n");
	printf("%d", dem);
}
