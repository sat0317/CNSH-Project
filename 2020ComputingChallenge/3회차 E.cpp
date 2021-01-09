#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int cnt, k;
    scanf("%d", &k);
    cnt=k/500;
    k%=500;
    cnt+=k/100;
    k%=100;
    cnt+=k/50;
    k%=50;
    cnt+=k/10;
    k%=10;
    printf("동전의 개수는 %d개 입니다.", cnt);
    
    return 0;
}

