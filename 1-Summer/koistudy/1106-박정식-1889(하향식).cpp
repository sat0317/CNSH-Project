#include <stdio.h>

int func(int i){
	printf("*");
	return (i-1)?func(i-1):0;
} 

int main(){
	int n; 
	scanf("%d", &n);
	
	return func(n);
}
