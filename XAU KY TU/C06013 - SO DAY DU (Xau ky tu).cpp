#include<stdio.h>
#include <string.h>
int main(){
	int t,a[10];//a[10]: Mang danh dau dem so lan xuat hien
	char s[1005];//Xau ki tu de cho
	scanf("%d",&t);
	while (t--){
	    for (int i=0; i<=9; i++){
		    a[i]=0;
		}
	    scanf("%s",s);
	    int c1=1;//p: bien check dk chua ki tu khac so va ki tu dau khac 0 hay chua	    
		for (int i=0; i<strlen(s);i++){
		    if(s[0]=='0'){
		        c1=0;
		        break;
		    } else {
		        if (s[i]-'0'>=0&&s[i]-'0'<=9){
				    a[s[i]-'0']++;// la so thi dem so lan xuat hien
		        } else {//la chu thi ket luan la sai, thoat lap
				    c1=0; 
					break;
				}
			}
		}
	    if (c1==1){
	    	int c2=1;//c2: Kiem tra xem du cac so tu 0 den 9 hay khong
	        for (int i=0; i<=9; i++){
			    if (a[i]==0){
				    c2=0; 
					break;
				}
			}
	        if (c2==1){
				printf("YES\n");
	        } else {
	            printf("NO\n");
	        }
	    } else {
	    	printf("INVALID\n");
	    }
	}
}
