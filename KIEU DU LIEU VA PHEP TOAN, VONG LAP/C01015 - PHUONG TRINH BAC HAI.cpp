#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if(a==0){
		if(b==0){
		    printf("NO");
		} else {
		    printf("%.2f", (float)-c/b);
		}
	} else if (a!=0){
	    float d = b * b - 4 * a * c;
	    if (d<0){
	        printf("NO");
	    } else if (d == 0){
	        printf("%.2f", (float)(-b/(2 * a)));
	    } else if (d > 0) {
	        printf("%.2f ", (float)((-b+sqrt(d))/(2*a)));
	        printf("%.2f", (float)((-b-sqrt(d))/(2*a)));
	    }
	}
}
