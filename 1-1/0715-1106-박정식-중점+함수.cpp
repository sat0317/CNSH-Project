#include <stdio.h>
struct point{
    float x;
    float y;
};

point f(point, point);

int main(){
    point a, b, m;
    scanf("%f %f %f %f", &a.x, &a.y, &b.x, &b.y);
    m=f(a, b);
    printf("%f, %f", m.x, m.y);
    
    return 0;
}

point f(point a, point b){
    point m;
    m.x=a.x+b.x;
    m.y=a.y+b.y;
    m.x/=2;
    m.y/=2;
    return m;
}
