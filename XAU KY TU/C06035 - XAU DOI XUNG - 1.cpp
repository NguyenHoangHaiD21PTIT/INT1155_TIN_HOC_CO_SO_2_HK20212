#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char c[100];
        gets(c);
        int dem=0;
        for(int i=0;i<strlen(c)/2;i++){
        	if(c[i]!=c[strlen(c)-i-1]){
        		dem++;
        	}
        }
        if(strlen(c)%2==0){
        	if(dem==1){
        		printf("YES\n");
        	} else {
        		printf("NO\n");
        	}
        } else {
        	if(dem==1||dem==0){
        		printf("YES\n");
        	} else {
        		printf("NO\n");
        	}
        }
    }
}
    	
