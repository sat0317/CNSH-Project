#include <stdio.h>
#include <math.h>
#define q(A) ((A)*(A))
struct vector{
    int x;
    int y;
    double l;
};

vector p[100];
vector imsi;

double l(int i){
    return sqrt(q(imsi.x-p[i].x)+q(imsi.y-p[i].y));
}

int main(){
    int n;
    int imi=0, i=0;
    p[imi].l=2147483647;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    
    scanf("%d %d", &imsi.x, &imsi.y);
    
    for(i=0;i<n;i++){
        p[i].l=l(i);
        if(p[imi].l>p[i].l) imi=i;
    }
    
    printf("%d번째 도시", imi+1);
    
    return 0;
} 
