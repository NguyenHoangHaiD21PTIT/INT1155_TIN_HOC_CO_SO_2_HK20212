#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n; int k =0;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int dem=0;
		for(int i=n-1;i>=0;i--){
		    int max=a[i];
			bool check = true;//Gia su a[i] la so khong be hon cac so dung truoc
			    for(int j=i-1;j>=0;j--){
				    if(max<a[j]){
					    check = false;
					    break;// 1 phan tu ben trai a[i]>a[i] thi sai va thoat vong lap
				    }
			    }
		    if(check==true){
			    dem++;
		    }
		}
		printf("%d\n", dem);
	}
}

