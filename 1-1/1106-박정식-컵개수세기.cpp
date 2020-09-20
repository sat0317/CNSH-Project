#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    printf("숫자 입력: ");
    scanf("%d", &n);
    printf("컵 개수: %lld", (long long int)n*(n+1)/2);

    return 0;
}
