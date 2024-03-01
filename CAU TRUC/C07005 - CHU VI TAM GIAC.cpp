#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double xa, ya, xb, yb, xc, yc;
		scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &xb, &yb, &xc, &yc);
		double ab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		double bc=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
		double ca=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
		if(ab+bc>ca&&bc+ca>ab&&ca+ab>bc){
			double x1=ab+bc+ca;
			double x2=ab+bc-ca;
			double x3=bc+ca-ab;
			double x4=ca+ab-bc;
			double x5=(double)1/4;
			double x6=x5*sqrt(x1*x2*x3*x4);
			printf("%.3lf", x6);
		} else {
			printf("INVALID\n");
		}
	}
}

