#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while (t--){
	    char c[1010];
	    gets(c);
	    int check=1;
		/*Bien kiem tra dieu kien chu so dau khac 0 hay chua, 
		co chua gi ngoai so ko(Dieu kien hop le)*/
	    for(int i=0;i<strlen(c);i++){
	    	if(c[0]=='0'){
	    		check=0;
	    		break;
	    	} else {
	    		if(c[i]<'0'||c[i]>'9'){
	    			check=0;
	    			break;
	    		}
	    	}
	    }
	    if(check==0){
	    	printf("INVALID\n");
	    } else {
	    	int demchan=0, demle=0;
	    	for(int i=0;i<strlen(c);i++){
	    		if((c[i]-'0')%2==0){
	    			demchan++;
	    		} else {
	    			demle++;
	    		}
	    	}
	    	if((demchan>demle &&strlen(c)%2==0)||(demle>demchan&&strlen(c)%2==1)){
	    		printf("YES\n");
	    	} else {
	    		printf("NO\n");
	    	}
	    }
	}
}
    		
