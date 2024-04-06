#include<stdio.h>
#include<math.h>
int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	float x1 = sqrt(x);
	float y1 = sqrt(y);
	int x2 = (int) x1;
	int y2 = (int) y1;
	if(x2 == x1){
		printf("%d\n", y2-x2+1);
		for (int i = x2; i <= y2; i++) printf("%d\n", i * i);
	} else {
		printf("%d\n", y2-x2);
		for (int i = x2+1; i <= y2; i++) printf("%d\n", i*i);
	}
}
	
	
