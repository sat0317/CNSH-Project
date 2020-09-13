#include <stdio.h>
	int a;
	int imsi; 

int ff(int n){
	printf("*");
	return n!=imsi?ff(n+1):0;
}

int func(int i){
	imsi=a-i+1;
	ff(1);
	printf("\n");
	return i-1?func(i-1):0;
} 

int main(){
	scanf("%d", &a);
	func(a);
	return 0;
}
