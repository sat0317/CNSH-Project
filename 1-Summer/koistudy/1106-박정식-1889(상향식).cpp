#include <stdio.h>

int n;

int a(int i){
	if(i>n) return 0;
	printf("%d ", i);
	return a(i+1);
}

int main(){
	scanf("%d", &n);
	
	return a(1);
}
