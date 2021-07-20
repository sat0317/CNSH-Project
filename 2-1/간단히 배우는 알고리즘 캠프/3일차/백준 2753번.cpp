#include <stdio.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	if(n%4){
		printf("0");
	} else if(n%400==0){
		printf("1");
	} else if(n%100==0){
		printf("0");
	} else printf("1");
	
	return 0;
}
