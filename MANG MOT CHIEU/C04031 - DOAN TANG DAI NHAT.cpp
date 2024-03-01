#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int h=1;h<=t;h++){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int lmax=0, l=1, socum=0, b[n];//lmax: Chieu dai day tang dai nhat, l: do dai day tang dang xet
		//socum: so day con tang dai nhat cung chieu dai lmax, b[n]: mang luu cac chi so bat dau cac day con thoa man
        b[0]=0;
		for(int i=1;i<n;i++){
        	if(a[i]>a[i-1]){
			    l++;
			} else {
				l=1;
			}
        	if(l>lmax){
        		lmax=l;
				b[0]=i-lmax+1;
        		socum=1;
        		//chi so bat dau cua day con tang dai lmax ket thuc tai vi tri thu i
        	} else if (l==lmax){
        		b[socum]=i-lmax+1;
        		socum++;
        	}
        }
        printf("Test %d: ", h);
        printf("\n");
        printf("%d\n", lmax);
        for(int i=0;i<socum;i++){
        	for(int j=0;j<lmax;j++){
        		printf("%d ", a[b[i]+j]);
            }
            printf("\n");
        }
    }
}

