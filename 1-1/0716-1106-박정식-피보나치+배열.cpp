#include <stdio.h>

int main(){
    long long int n, i, a[1000]={1, 1, };
    scanf("%lld", &n);
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    } 
    printf("%lld", a[n-1]);
    
    return 0;
}
