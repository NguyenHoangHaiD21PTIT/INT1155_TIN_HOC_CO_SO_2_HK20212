#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct sinhvien{
	int stt;
	char ten[100];
	char ngaysinh[100];
	float x,y,z;//diem thi 3mon
	float tong;
};
typedef struct sinhvien sv;
int main(){
	int n;//so sinh vien
	scanf("%d", &n);
	sv a[n];
	float max=-1;
	for(int i=0;i<n;i++){
		scanf ("\n");
	    gets (a[i].ten);
	    scanf ("%s", a[i].ngaysinh);
	    scanf ("%f%f%f", &a[i].x ,&a[i].y , &a[i].z);
	    a[i].tong = a[i].x + a[i].y + a[i].z;
	    if (max<a[i].tong){
	    	max=a[i].tong;
	    }	
	    a[i].stt = i+1;
	}
	for(int i=0;i<n;i++){
		if(a[i].tong==max){
			printf("%d %s %s %.1f\n", a[i].stt,a[i].ten,a[i].ngaysinh,a[i].tong);
		}
	}
}
	
	
