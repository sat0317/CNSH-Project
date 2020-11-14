#include <stdio.h>

struct round{
	int x;
	int y;
	int r;
};

int main(){
	round a[2];
	int l;
	scanf("%d %d %d %d %d %d", &a[0].x, &a[0].y, &a[0].r, &a[1].x, &a[1].y, &a[1].r);
	
	l=(a[0].x-a[1].x)*(a[0].x-a[1].x)+(a[0].y-a[1].y)*(a[0].y-a[1].y);
	if(l>(a[0].r+a[1].r)*(a[0].r+a[1].r)){
		printf("만나지 않음");
	} else {
		printf("만남");
	}
	
	return 0;
}
