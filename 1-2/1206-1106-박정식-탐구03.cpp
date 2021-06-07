#include <stdio.h>

int main(){
	int cnt=0, n;
	scanf("%d", &n);
	cnt+=n/500;  n%=500;
	cnt+=n/100;  n%=100;
	cnt+=n/50;  n%=50;
	cnt+=n/10;  n%=10;
	
	printf("%d", cnt);
	
	return 0;
}
