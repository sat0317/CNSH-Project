#include <stdio.h>
#define abs(a) (a>0?a:-a)

long long int get(long long int a){
	if(a==0) return 0;
	return a%10+get(a/10);
}

int main(){
	long long int a;
	scanf("%lld", &a);
	printf("%lld", get(abs(a)));
	
	return 0;
}
