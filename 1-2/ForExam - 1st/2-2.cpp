#include <stdio.h>

struct point{
	int x;
	int y;
};

int main(){
	point p[10];
	int i;
	const int n=10;
	
	for(i=0;i<n;i++){
		scanf("%d %d", &p[i].x, &p[i].y);
	}
	
	return 0;
}
