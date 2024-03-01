#include<stdio.h>
int ngto[1000001];
void sangnt(){
	//gia su tat ca la snt
	for(int i=0;i<=1000000;i++){
		ngto[i]=1;
	}
	ngto[1]=ngto[0]=0;
	for(int i=2;i<=1000;i++){
		if(ngto[i]==1){//khi i la snt
			for(int j=i*i;j<=1000000;j+=i){//xet cac boi cua i
				ngto[j]=0;
			}
		}
	}
}
int main(){
	sangnt();
	int n;
	scanf("%d", &n);
	for(int i=0;i<=n;i++){
		if(ngto[i]==1){
			printf("%d\n", i);
		}
	}
}
	
