#include <stdio.h>

int a(int i){
	if(!i) return 0;
	printf("*");
	return a(i-1);
}

int main(){
	int n; 
	scanf("%d", &n);
	
	return a(n);
}
