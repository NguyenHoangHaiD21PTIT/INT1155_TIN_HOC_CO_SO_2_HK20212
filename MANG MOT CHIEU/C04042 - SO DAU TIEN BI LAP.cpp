#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int check2=0, solap;//check2: gia su cac phan tu khac nhau hoan toan
		for(int i=0;i<n-1;i++){
			int check1=0;//Gia su phan tu dang xet o vi tri thu i khac voi moi phan tu phia sau no (Khong bi lap)
			for(int j=i+1;j<n;j++){
			    if(a[i]==a[j]){
			    	check1=1;
			    	break;
			    }
			}
			if(check1==1){
				printf("%d", a[i]);
				check2=1;
				break;
		    }	
	    }
	    if(check2==0)   printf("NO");
	    printf("\n");
	}
}
