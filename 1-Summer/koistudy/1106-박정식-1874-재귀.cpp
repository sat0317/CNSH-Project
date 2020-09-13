#include <stdio.h>

long long int n, i=1; 

long long int f(long long int);

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
  
  return 0;
}

long long int f(long long int a){
	long long int t;
	if(a<10) {
		return a;
	}
	t=f(a/10);
	i*=10;
	return (a%10)*i+t;
}
