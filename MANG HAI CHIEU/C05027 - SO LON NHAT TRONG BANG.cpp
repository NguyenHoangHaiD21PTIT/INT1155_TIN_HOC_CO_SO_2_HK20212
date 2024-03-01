#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x,y;
    int a[100]={}, b[100]={};
    int dema=0,demb=0;
    while(n--){
    	scanf("%d", &x);
    	a[dema]=x;
    	dema++;
    	scanf("%d", &y);
    	b[demb]=y;
    	demb++;
    }
    int min1=99999999;
    for(int i=0;i<dema;i++){
    	if(a[i]<min1){
    		min1=a[i];
    	}
    }
    int min2=99999999;
    for(int i=0;i<demb;i++){
    	if(b[i]<min2){
    		min2=b[i];
    	}
    }
    printf("%lld", (long long)min1*min2);
}
    
    	
