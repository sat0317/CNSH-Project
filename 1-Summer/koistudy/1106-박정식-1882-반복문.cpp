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
    if(a==1||!a) return a;
    
    for(int i=0;i<n;i++) b*=a;
    
    return b;
}
