#include<stdio.h>
#include<string.h>
struct sinhvien{
	char hoten[50];
	int year;
	float cc, kiemtra, thi;
	float tk;
};
typedef struct sinhvien sv;
//0. Nhap ds
void nhapds(sv a[], int n){
	for(int i=0;i<n;i++){
		scanf("\n");
		gets(a[i].hoten);
		scanf("%d", &a[i].year);
		scanf("%f %f %f", &a[i].cc, &a[i].kiemtra, &a[i].thi);
		a[i].tk=a[i].cc*0.1+a[i].kiemtra*0.4+a[i].thi*0.5;
	}
}
//1. Dem so sinh vien no mon:
int count(sv a[], int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i].tk<4.5){
			dem++;
		}
	}
	return dem;
}
//2. Sap xep theo diem tong ket
void sapxep(sv a[], int n){
	sv tmp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].tk>a[j].tk){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	sv a[n];
	//0. Nhap ds
	nhapds(a,n);
	//1. Tim sinh vien co tk nho nhat
	float min=1e9;
	char s[50];
	for(int i=0;i<n;i++){
		if(a[i].tk<min){
			min=a[i].tk;
			strcpy(s, a[i].hoten);
		}
	}
	printf("1. Sinh vien co diem tong ket nho nhat la %s (%.2f)\n", s, min);
	//2. Dem so sinh vien truot mon
	printf("2. So sinh vien no mon la %d\n", count(a,n));
	//3. Sap xep theo diem tong ket tang dan
	printf("3. Danh sach sinh vien sap xep theo diem tong ket tang dan la: ");
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d %s %d %.2f\n",i+1, a[i].hoten, a[i].year, a[i].tk);
	}
}