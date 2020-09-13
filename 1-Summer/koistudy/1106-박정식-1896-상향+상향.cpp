#include <stdio.h>
	int a;
	int imsi; 

int ff(int n){
	printf("*");
	return n!=imsi?ff(n+1):0;
}

int func(int i){
	imsi=i;
	ff(1);
	printf("\n");
	return i!=a?func(i+1):0;
} 

int main(){
	scanf("%d", &a);
	func(1);
	return 0;
}
