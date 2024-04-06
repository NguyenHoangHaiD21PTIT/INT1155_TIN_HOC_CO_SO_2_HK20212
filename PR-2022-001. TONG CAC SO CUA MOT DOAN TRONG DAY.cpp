#include<stdio.h>
int main(){
	int u0, d, N;
	scanf("%d%d%d",&u0, &d, &N);
	int u[N + 1]; u[0] = u0;
	for(int i = 1;i<N;i++) u[i] = u[i - 1] + d;
	int tong = 0;
	for(int i = 0;i<N;i++) tong+=u[i];
	printf("%d", tong);
}
/* U0 = 3, d = 4, N = 3
u0 = 3 u1 = 7, u2 = 11 t?ng 21 */