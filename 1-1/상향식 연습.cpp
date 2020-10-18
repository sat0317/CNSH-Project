#include <stdio.h>

int repeatN=0;
int n;

int upfibo(int a, int b){
	repeatN++;
	if(n<=repeatN) return b;
	return upfibo(b, b+a);
}

int downfibo(int a){
	if(a<=2) return 1;
	else return downfibo(a-1)+downfibo(a-2);
}

int main(){
	scanf("%d", &n);
	printf("%d\n", upfibo(0, 1));
	printf("%d", downfibo(n));
	
	return 0;
}

