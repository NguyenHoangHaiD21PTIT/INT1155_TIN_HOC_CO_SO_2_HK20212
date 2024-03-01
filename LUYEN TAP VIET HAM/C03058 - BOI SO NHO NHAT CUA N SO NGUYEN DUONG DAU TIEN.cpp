#include<stdio.h>
long long BCNN(long long a, long long b){
	long long n = a *b;
	while(b!=0){
		long long c = a % b;
		a = b;
		b = c;
	}	
	return n/a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n==1){
			printf("1");
			printf("\n");
		} else if(n==0){
			printf("0");
			printf("\n");
		} else if(n>=2){
		    long long a[n];
		    for(long long i=0;i<n;i++){
			    a[i]=i+1;
		    }
		    long long tmp=BCNN(a[0],a[1]);
		    for(long long i=2;i<n;i++){
	            tmp = BCNN(tmp, a[i]);    
	        }
		    printf("%lld", tmp);
		    printf("\n");
	    }
	}
}

		




