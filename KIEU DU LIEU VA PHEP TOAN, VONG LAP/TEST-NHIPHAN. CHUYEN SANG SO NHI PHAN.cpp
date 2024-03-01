#include <stdio.h>
#include <math.h>
int main(){
    int thapphan;
    scanf("%d", &thapphan);
    int p = 0;
	long long nhiphan=0;
    while (thapphan > 0)
    {
        nhiphan += (thapphan % 2) * pow(10, p);
        ++p;
        thapphan /= 2;
    }
   	printf("%lld", nhiphan);
}
