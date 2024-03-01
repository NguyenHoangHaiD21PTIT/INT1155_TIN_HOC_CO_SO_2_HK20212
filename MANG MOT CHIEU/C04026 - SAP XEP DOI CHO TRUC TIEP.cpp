#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d", &a[i]);
    }
    int tg, buoc=1;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
        printf ("Buoc %d: ", buoc);
        for (int k = 0 ; k < n ; k++){
		    printf ("%d ", a[k]);
		}
	    buoc++;
        printf ("\n");
    }
}
    
