#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int h=1;h<=t;h++){
		int hang, cot;
		scanf("%d%d", &hang, &cot);
		int a[hang][cot];
		for(int i=0;i<hang;i++){
			for(int j=0;j<cot;j++){
				scanf("%d", &a[i][j]);
			}
		}
		int h1, c1, tonghmax=-1e9, tongcmax=-1e8;//h1, c1: Hang va cot co tong lon nhat; tonghmax, tongcmax: Tong gia tri lon nhat
	    //Tim hang co tong lon nhat
	    for(int i=0;i<hang;i++){//Duyet tung hang
	        int tongh=0;//tong cac phan tu trong hang
	        for(int j=0;j<cot;j++){ // Duyet tung phan tu trong hang
	        	tongh=tongh+a[i][j];
	        }
	        if(tongh>tonghmax){
	        	tonghmax=tongh;
	        	h1=i;
	        }
	    }
	    for(int i=0;i<cot;i++){//Duyet tung cot
	        int tongc=0; //tong cac phan tu trong cot
	        for(int j=0;j<hang;j++){
	        	if(j!=h1){
	        	    tongc=tongc+a[j][i];
	            }
	        }
	        if(tongc>tongcmax){
	        	tongcmax=tongc;
	        	c1=i;
	        }
	    }
	    printf("Test %d:", h);
	    printf("\n");
	    for(int i=0;i<hang;i++){
	    	if(i!=h1){
	    		for(int j=0;j<cot;j++){
	    			if(j!=c1){
	    				printf("%d ", a[i][j]);
	    			}
	    		}
	    		printf("\n");
	    	}
	    }
	}
}
	    
	        
