#include <stdio.h>

int n;

int a(int i){
	if(!i) return 0;
	printf("%d ", n-i+1);
	return a(i-1);
}

int main(){
	scanf("%d", &n);
	
	return a(n);
}
