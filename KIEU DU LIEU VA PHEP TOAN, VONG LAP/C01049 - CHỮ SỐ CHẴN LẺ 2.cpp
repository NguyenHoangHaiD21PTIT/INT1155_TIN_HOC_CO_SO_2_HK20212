#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t>0){
		int n;
		scanf("%d", &n);
		int demchan=0; 
		int demle=0;
		while(n>0){
			if(n%2==0){
				demchan++;
			} else {
				demle++;
			}
			n=n/10;
		}
		printf("%d %d\n", demle, demchan);
		t--;
	}
}
