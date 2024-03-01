#include<stdio.h>
int min2so(int a, int b){
	if(a<b){
		return a;
	} else {
		return b;
	}
}
int gtnn(int a, int b, int c, int d){
	int x=min2so(a, b);
	int y=min2so(c,d);
	int z=min2so(x,y);
	return z;
}
int max2so(int a, int b){
	if(a>b){
		return a;
	} else {
		return b;
	}
}
int gtln(int a, int b, int c, int d){
	int x=max2so(a, b);
	int y=max2so(c,d);
	int z=max2so(x,y);
	return z;
}
int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	int xmin=gtnn(x1,x2,x3,x4);
	int xmax=gtln(x1,x2,x3,x4);
	int ymin=gtnn(y1,y2,y3,y4);
	int ymax=gtln(y1,y2,y3,y4);
	int x = xmax-xmin;
	int y = ymax-ymin;
	if(x>=y){
		printf("%d", x*x);
	} else if (x<y) {
		printf("%d", y*y);
	}
}
		

