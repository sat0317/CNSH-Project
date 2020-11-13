#include <stdio.h>

int main(){
	int x1, x2, y1, y2, r1, r2;
	int l;
	scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
	
	l=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	if(l>(r1+r2)*(r1+r2)){
		printf("만나지 않음");
	} else {
		printf("만남");
	}
	
	return 0;
}
