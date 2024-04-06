#include<stdio.h>
void sx(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int main(){
	int hang, cot;
	scanf("%d %d", &hang, &cot);
	int a[hang][cot];
	int cnt[100005], cnt1[100005];
	for(int i = 0;i<hang;i++){
		for(int j = 0;j<cot;j++){
			scanf("%d", &a[i][j]);
			cnt[a[i][j]]++;
		}
	}
	int val[100005] = {};
	int i_val = 0;
	for(int i = 0;i<hang;i++){
		for(int j = 0;j<cot;j++){
			if(cnt[a[i][j]]){
				//Đẩy a[i][j] vào mảng val
				val[i_val] = a[i][j];
				i_val++;
				//
				cnt1[a[i][j]] = cnt[a[i][j]];
				cnt[a[i][j]] = 0;		
			}
		}
	}
	sx(val, i_val);
	for(int i=0;i<i_val;i++) printf("%d ", val[i]);
	printf("\n");
	for(int i=0;i<i_val;i++) printf("%d ", cnt1[val[i]]);
}