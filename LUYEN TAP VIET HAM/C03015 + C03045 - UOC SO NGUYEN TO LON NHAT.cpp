#include<stdio.h>
#include<math.h>
int checknt(int n){
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
int uocnt(int n){
	int x;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){ 
		    if(checknt(n/i)==1){
		 	    return n/i;
		    } else if (checknt(i)==true){
		    	x=i;
		    }
		}
	}
return x;
}
/* VD: So 315: Xet i tu 1 den 17.74
i=1. Chia het. 315 k nto, 1 k nto--> loai.
i=2. k chia het. F
i=3 Chia het. 315/3=105 k ngto. 3 nto-->x=3
i=4. K chia het. F
i=5 Chia het. 315/5=63 knt, 5 nto-->x=5
i=6. F
i=7. Chia het 315/7=45 knt , 7 nt-->x=7
i=8, loai
i=9 35 k nto, 9 k nto, i=10 cung vay
i=11, 12, 13, 14 k chia het
i=15, 315/15 va 15 k nto--> loai
i=16 k chia het --> loai*/
int main(){
int t;
scanf("%d", &t);
while(t--){
	int n;
	scanf("%d", &n);
	printf("%d\n", uocnt(n));
}
}



