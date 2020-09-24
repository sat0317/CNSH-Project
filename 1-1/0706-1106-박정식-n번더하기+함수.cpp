#include <stdio.h>

int gNum(){
    int t=123;
    return t;
}
int n;

int main(){
    int su=0;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
        su+=gNum();
    printf("%d", su);
    return 0;
}



