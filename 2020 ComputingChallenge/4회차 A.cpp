#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(!((a-b+c)%10)) printf("���");
	else printf("�׷�����");
	return 0;
} 
