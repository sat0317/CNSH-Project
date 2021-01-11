#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(!((a-b+c)%10)) printf("대박");
	else printf("그럭저럭");
	return 0;
} 
