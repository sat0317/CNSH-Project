#include <stdio.h>

long long int n;

long long int f(long long int);

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
  
  return 0;
}

long long int f(long long int a){
	long long int ans=0;
	for(;a;a/=10){
		ans*=10;
		ans+=a%10;
	}
	return ans;
}
