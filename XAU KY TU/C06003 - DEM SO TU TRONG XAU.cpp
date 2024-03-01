#include<stdio.h>
#include<string.h>
int sotu(char s[200]){
	int dem=0;
	if(s[0]!=' '){
	   dem++;
	}
	for(int i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&s[i+1]!=' '){
			dem++;
		}
	}
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[201];
		fgets(s, sizeof(s), stdin);
		printf("%d", sotu(s));
	    printf("\n");
	}
}

	
