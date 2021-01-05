#include <stdio.h>

int main(){
	const int n=50;
	long long int ans=0;
	
	for(int i=1;i<=n;i++){
		ans=ans+i*i*i*i*i*i;
	}
	printf("%lld", ans);
	
	return 0;
}
