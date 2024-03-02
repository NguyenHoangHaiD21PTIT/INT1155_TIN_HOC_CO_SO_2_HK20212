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
	char b[500];//b dung de hoan doi ten
	char c[500];//c dung de hoan doi ngaysinh
	for(int i=0;i<n;i++){
		scanf ("\n");
	    gets (a[i].ten);
	    scanf ("%s", &a[i].ngaysinh);
	    scanf ("%f%f%f", &a[i].x ,&a[i].y , &a[i].z);
	    a[i].tong = a[i].x + a[i].y + a[i].z;
	    a[i].stt = i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].tong<a[j].tong){
				float tmp=a[i].tong;
				a[i].tong=a[j].tong;
				a[j].tong=tmp;
			        int tam =a[i].stt;
			        a[i].stt=a[j].stt;
			        a[j].stt=tam;
			        strcpy(b, a[i].ten);
			        strcpy(a[i].ten,a[j].ten);
			        strcpy(a[j].ten,b);
			        strcpy(c, a[i].ngaysinh);
			        strcpy(a[i].ngaysinh,a[j].ngaysinh);
			        strcpy(a[j].ngaysinh,c);
			}	
		}
		printf("%d %s %s %.1f\n", a[i].stt,a[i].ten,a[i].ngaysinh,a[i].tong);
	}
}
/*
3
Nguyen Van A
12/12/1994
3.5
7.0
5.5
Nguyen Van B
1/9/1994
7.5
9.5
9.5
Nguyen Van C
6/7/1994
4.5
4.5
5.0 */
