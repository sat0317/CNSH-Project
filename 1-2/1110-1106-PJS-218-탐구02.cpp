#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, sum=0;
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5==0) sum+=i;
    }
    printf("%d", sum);
    
    return 0;
}

