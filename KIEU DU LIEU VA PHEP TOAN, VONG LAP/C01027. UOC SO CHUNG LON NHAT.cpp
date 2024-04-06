#include <stdio.h>
int UCLN(int a, int b) {
    while (a != 0) {
        int c = a;
        a = b % a;
        b = c;
    }
    return b;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", UCLN(a, b));
    }
}