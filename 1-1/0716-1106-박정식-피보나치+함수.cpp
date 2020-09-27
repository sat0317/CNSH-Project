#include <stdio.h>

long long int fi(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", fi(n));
    
    return 0;
}

long long int fi(int n){
    if(n<=2) return 1;
    return fi(n-1)+fi(n-2);
}


