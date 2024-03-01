#include<stdio.h>
#include<string.h>
int main(){
	char c[100100];
	gets(c);
	char max;//bien luu ki tu co thu tu tu dien lon nhat
	int n=strlen(c);
	int p1=0, p2;//p1: vi tri ta bat dau xet de tim phan tu co GTLN
	             /*p2: Bien luu vi tri phan tu co GTLN cuoi cung
	             --> Lan lap thu 2: p1=p2+1; */
	while(p1<n){
		//Tim phan tu co GTLN tu vi tri xet p1;
		max=c[p1];// gia su phan tu o vi tri xet dau tien lon nhat
		for(int i=p1;i<n;i++){
			if(c[i]>max){
			    max=c[i];
			}
		}
		//Luu vi tri cua phan tu lon nhat ngoai cung va in cac phan tu GTLN
		for(int i=p1;i<n;i++){
			if(c[i]==max){
				printf("%c", c[i]);
				p2=i;
			}
		}
		p1=p2+1;
	}
}
