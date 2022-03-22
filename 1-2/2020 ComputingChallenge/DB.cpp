#include <stdio.h>

long long int n;

int sqrt(long long int n){
	double i, m;
	for(i=0;i*i<=n;i++);
	return i-1;
}

int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
}


