#include<stdio.h>
#include<math.h>
long long checknt(long long n){ // kiem tra nguyen to
	if(n<=1){
		return 0;
	} else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	        return 1;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long x, y;
		scanf("%lld%lld", &x, &y);
		double x1=sqrt(x);
		double x2=(int) x1;
		double y1=sqrt(y);
		double y2=(int) y1;
		long long dem =0;
	    if(x1==x2){
	        for(long long i=x2;i<=y2;i++){
	       	    if(checknt(i)==1){
	       	    	dem++;
				}
		    }
		printf("%lld", dem);
		printf("\n");
	    } else if (x1!=x2){
	    	for(long long i=x2+1;i<=y2;i++){
	       	    if(checknt(i)==1){
	       	    	dem++;
				}
		    }
		printf("%lld", dem);
		printf("\n");
	    }
	}
}
    	

