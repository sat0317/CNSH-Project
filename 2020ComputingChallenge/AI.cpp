#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ma=max(a, max(b, c));
    int mi=min(a, min(b, c));
    int ans=0;
    
    if(ma==a) if(mi==b) ans=c;
    if(ma==b) if(mi==a) ans=c;
    if(ma==c) if(mi==b) ans=a;
    if(ma==b) if(mi==c) ans=a;
    if(ma==a) if(mi==c) ans=b;
    if(ma==c) if(mi==a) ans=b;
    
    printf("%d", mi);
    return 0;
}

