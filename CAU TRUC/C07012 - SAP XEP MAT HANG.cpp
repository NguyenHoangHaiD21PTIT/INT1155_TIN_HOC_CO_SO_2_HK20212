#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct mathang{
	int stt;
	char ten[100];
	char nhomhang[100];
	float giamua;
	float giaban;
	float loinhuan;
};
typedef struct mathang mh;
int main(){
	int n;
	scanf("%d", &n);
	mh a[n];
	for(int i=0;i<n;i++){
		scanf ("\n");
	        gets (a[i].ten);
	        scanf("\n");
	        gets(a[i].nhomhang);
	        scanf ("%f%f", &a[i].giamua ,&a[i].giaban);
	        a[i].loinhuan = a[i].giaban-a[i].giamua;
	        a[i].stt = i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].loinhuan<a[j].loinhuan){
				mh temp ;
		                temp = a[i];
		                a[i] = a[j];
		                a[j] = temp;
			}	
		}
		printf("%d %s %s %.2f\n", a[i].stt,a[i].ten,a[i].nhomhang,a[i].loinhuan);
	}
}
