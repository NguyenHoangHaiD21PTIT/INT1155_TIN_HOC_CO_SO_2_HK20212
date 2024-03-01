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

void in(int a[], int n){
	for(int i=0;i<n;i++) printf("%d ", a[i]);
	printf("\n");
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m], k1 = 0, k2 = 0, cnt1[1005]={}, cnt2[1005]={}, A[1005]={}, B[1005]={};
	
//I. XU LI TRUNG NHAU
	//Solve array a
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		cnt1[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt1[a[i]]){
			A[k1] = a[i];
			k1++;
			cnt1[a[i]] = 0;
		} 	
	}

	//solve array b
	for(int i=0;i<m;i++){
		scanf("%d", &b[i]);
		cnt2[b[i]]++;
	}
	for(int i=0;i<m;i++){
		if(cnt2[b[i]]){
			B[k2] = b[i];
			k2++;
			cnt2[b[i]] = 0;
		} 	
	}

//II. TAO MANG, DANH DAU
	int p1[1005]={}, p2[1005]={}; //p1[x] = 1 tuc la x xuat hien trong A
	for(int i=0;i<k1;i++) p1[A[i]] = 1;
	for(int i=0;i<k2;i++) p2[B[i]] = 1;
	
	int k3 = 0, k4 = 0, k5 = 0, giao[1005]={}, hieu1[1005]={}, hieu2[1005]={};
	//Xet cac ptu mang B thuoc A/k thuoc A
	for(int i=0;i<k2;i++){
		if(p1[B[i]]){
			giao[k3] = B[i];
			k3++;
		} else {
			hieu2[k5] = B[i];
			k5++;
		}
	}
	//Xet cac phan tu mang A khong thuoc B
	for(int i=0;i<k1;i++){
		if(!p2[A[i]]){
			hieu1[k4] = A[i];
			k4++;
		}
	} 

	
//III. SAP XEP VA IN
	sx(giao, k3); sx(hieu1, k4); sx(hieu2, k5);
	in(giao, k3); in(hieu1, k4); in(hieu2, k5);
}
/* 
15 14
 2 2 2 1 1 1 4 4 4 3 3 3  5 5 5
 3 3 4 4 5 5 6 6 7 7 8 8  1 1 */ 