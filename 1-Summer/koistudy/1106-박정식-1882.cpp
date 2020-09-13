#include <stdio.h>

int a, n;

long long int pow(int, int);

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld ", pow(a, n));
}

long long int pow(int a, int n){
    long long int b=1;
    if(a==1||!a||n==1) return a;
    if(n==0) return 1;
    
    return pow(a, n-1)*a;
}
