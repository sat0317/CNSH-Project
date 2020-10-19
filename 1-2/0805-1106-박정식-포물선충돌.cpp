#include <stdio.h>
struct won{
    double x;
    double y;
    double r;
}; 

double jg(double a, double b){ //차의 제곱 구하기  
    return (a-b)*(a-b);
}

int overlapped(won a, won b){
    if(jg(a.x, b.x) + jg(a.y, b.y) < (a.r+b.r)*(a.r+b.r)) return 1;//맞음  
    else return 0;  //아님  
}

int main(){
    won a, b;
    scanf("%lf %lf %lf %lf %lf %lf", &a.x, &a.y, &a.r, &b.x, &b.y, &b.r);
    if(overlapped(a, b)){
        printf("overlapped!");
    } else {
        printf("not overlapped!");
    }
    
    return 0;
}
