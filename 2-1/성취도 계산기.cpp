#include <stdio.h>
//char f(int s){return s>80?65:s>60?66:s>40?67:s>20?68:69;}
char f(int s){return 70-((s?s:1)+19)/20;}
int main(){
	int a;
	scanf("%d", &a);
	printf("%c", f(a));
}
