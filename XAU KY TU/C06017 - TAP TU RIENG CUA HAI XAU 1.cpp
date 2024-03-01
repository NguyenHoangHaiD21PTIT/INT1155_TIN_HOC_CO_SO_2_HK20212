#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a, const void*b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(strcmp(x,y)<0){
		return -1;
	} else {
		return 1;
	}
}
int main(){
	char s1[1000], s2[1000], c1[100][100], c2[100][100];
	gets(s1);gets(s2);
	int n1=0, n2=0;//n1, n2: so phan tu trong s1 va s2
	char *token1=strtok(s1, " ");
	while(token1!=NULL){
		strcpy(c1[n1], token1);
	    n1++;
	    token1=strtok(NULL, " ");
	}
	char *token2=strtok(s2, " ");
	while(token2!=NULL){
		strcpy(c2[n2], token2);
	    n2++;
	    token2=strtok(NULL, " ");
	}
	qsort(c1, n1, sizeof(c1[0]), cmp);
	for(int i=0;i<n1;i++){
		while(strcmp(c1[i],c1[i+1])==0){
			i++;//so sanh 2 tu giong nhau--> bo qua
		}
		int check=0;//gia su tu c1[i] ta xet khong co trong mang c2
		for(int j=0;j<n2;j++){//so sanh tu c1[i] voi tat cac cac tu trong c2
		    if(strcmp(c1[i],c2[j])==0){
		    	check=1;
		    	break;
		    }
		}
		if(check==0){
			printf("%s", c1[i]);
		}
	}
}
		
