#include<stdio.h>

void sw(int *a, int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
} 

int main(){
	int a, b;
	scanf("%d %d", &a, &b); 
	sw(&a, &b);
	printf("%d %d", a, b);
	return 0; 
} 
