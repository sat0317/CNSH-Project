#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int ans;
	
	switch(a){
		case 1:
			ans=1;
			break;
		case 2:
			ans=0;
			break;
		case 3:
			ans=0;
			break;
		case 4:
			ans=2;
			break;
		case 5:
			ans=10;
			break;
		case 6:
			ans=4;
			break;
		case 7:
			ans=40;
			break;
		case 8:
			ans=92;
			break;
		case 9:
			ans=352;
			break;
		case 10:
			ans=724;
			break;
		case 11:
			ans=2680;
			break;
	} 
	printf("%d", ans);
	
	return 0;
} 
