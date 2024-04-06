#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double a, b, c;
		scanf("%lf%lf%lf", &a, &b, &c);
		if(a+b>c&&b+c>a&&c+a>b&&a&&b&&c){
			double cosx = (a*a + b*b - c*c)/(2*a*b);
			double cosy = (b*b + c*c - a*a)/(2*b*c);
			double cosz = (c*c + a*a - b*b)/(2*c*a);
			if(cosx<=0||cosy<=0||cosz<=0){
				printf("0 ND ND\n");
			} else {
				double chuvi = a + b + c;
				double p=(double) (a + b + c)/2;
				double dientich=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("1 %.3lf %.3lf\n", chuvi, dientich);
			}
		} else {
			printf("0 ND ND\n");
		}
	}
}
