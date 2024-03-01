#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int a[n];
	    for(int i = 0; i < n; i++){
	        scanf("%d", &a[i]);
	    }
	    int GTLN = a[0];
	    for(int i = 1; i < n; i++){
	        if(a[i] > GTLN){
	            GTLN = a[i];
	        }
	    }
	    printf("%d\n", GTLN);
	    for(int i = 0; i < n; i++){
	        if(a[i] == GTLN){
	            printf("%d ", i);
	        }
	    }
	    printf("\n");
	}  
}
