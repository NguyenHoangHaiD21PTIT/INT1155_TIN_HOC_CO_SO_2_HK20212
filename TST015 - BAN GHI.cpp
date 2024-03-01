#include <stdio.h>
#include <math.h>

struct tamgiac{
	int x , y , z;
    double dt;
};
typedef struct tamgiac tg;
double dientich (tg a){
    double p = (a.x + a.y + a.z) / 2;
    a.dt = sqrt (p * ( p -a.x ) * ( p - a.y ) * ( p -a.z )); 
    return a.dt;
}
void in(tg a){
    printf ("%d %d %d", a.x , a.y , a.z);
}
int main (){
    int m;
    scanf ("%d", &m);
    tg a[m];
    for (int i = 0 ; i < m ; i++){
        scanf ("%d%d%d", &a[i].x , &a[i].y , &a[i].z);
        a[i].dt = dientich(a[i]);
    }
    for (int i = 0 ; i < m ; i++){
        for (int j = i + 1 ; j < m ;j++){
            if (a[i].dt > a[j].dt ){
                tg tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for ( int i = 0 ; i < m ; i++ ){
        in(a[i]);
        printf ("\n");
    }
    return 0;
}
