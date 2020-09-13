#include <stdio.h>
	int a;

int ff(int n){
	printf("*");
	return n-1?ff(n-1):0;
}

int func(int i){
	ff(a-i+1);
	printf("\n");
	return i-1?func(i-1):0;
} 

int main(){
	scanf("%d", &a);
	func(a);
	return 0;
}
