#include <stdio.h>

struct pnt{
    short x, y;
};

int main(){
    char n, i;
    pnt p[10];
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    for(i=0;i<n;i++){
        printf("%d %d\n", p[i].x, p[i].y);
    }
    
    return 0;
}
