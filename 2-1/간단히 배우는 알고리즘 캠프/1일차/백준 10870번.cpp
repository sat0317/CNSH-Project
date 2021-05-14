#include <stdio.h>
int a[21]={0, 1, };

int main(){
	for(int i=2;i<21;i++){
		a[i]=a[i-1]+a[i-2];
	}
	int n;
	scanf("%d", &n);
	printf("%d", a[n]);
	return 0;
}
