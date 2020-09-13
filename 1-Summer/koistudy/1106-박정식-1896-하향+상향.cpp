#include <stdio.h>
	int a;

int ff(int n){
	printf("*");
	return n-1?ff(n-1):0;
}

int func(int i){
	ff(i);
	printf("\n");
	return i!=a?func(i+1):0;
} 

int main(){
	scanf("%d", &a);
	func(1);
	return 0;
}
