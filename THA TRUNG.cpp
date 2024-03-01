#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if((i+1)*i/2>=n){
			printf("%d",i);
			break;
		}
	}
}
