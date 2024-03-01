#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n; int k =0;
		scanf("%d", &n);
		int a[n], b[1000];// Mang b de luu cac phn tu thoa man
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
		    int max=a[i];
			bool check = true;//Gia su a[i] la so lon nhat thoa man
			    for(int j=i+1;j<n;j++){
				    if(max<=a[j]){
					    check = false;
					    break;// 1 phan tu ben phai a[i]>a[i] thi sai va thoat vong lap
				    }
			    }
		    if(check==true){
			    b[k]=a[i];//Luu tru cac phan tu thoa man
			    k++;
		    }
		}
		// sap xep cac phan tu thoa man
		for(int i=0;i<k-1;i++){
			for(int j=i+1;j<k;j++){
				if(b[i]<b[j]){
					int tmp=b[i];
					b[i]=b[j];
					b[j]=tmp;
				}
			}
		}
		for(int i=0;i<k;i++){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}


