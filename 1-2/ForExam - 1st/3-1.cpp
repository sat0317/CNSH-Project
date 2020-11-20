#include <stdio.h>
#include <math.h>

struct pos{
	int x;
	int y;
	double d;
};

int main(){
	pos a[100];
	pos ads;
	int imsi=0;
	int n;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	scanf("%d %d", &ads.x, &ads.y);
	
	for(int i=0;i<n;i++){
		a[i].d=sqrt((ads.x-a[i].x)*(ads.x-a[i].x)+(ads.y-a[i].y)*(ads.y-a[i].y));
		if(a[i].d<a[imsi].d){
			imsi=i;
		}
	}
	
	printf("%d", imsi+1);
	
	
	return 0;
}
