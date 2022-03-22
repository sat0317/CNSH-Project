#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int x[100], y[100], map[100][100]={}, n, ans=0, imsi;
	int xm=0, ym=0, xM=0, yM=0;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    	scanf("%d %d", &x[i], &y[i]);
    	map[x[i]][y[i]]=1;
	}
	
	if(n<3){
		printf("%d", n);
		goto end;
	}
	
	for(int imsi=1;imsi<n&&x[imsi]==x[imsi-1];imsi++);
	if(imsi==n){
		printf("%d", 2);
		goto end;
	}
	for(int imsi=1;imsi<n&&y[imsi]==y[imsi-1];imsi++);
	if(imsi==n){
		printf("%d", 2);
		goto end;
	}
	
	for(int i=1;i<n;i++){
		if(x[xm]>x[i]) xm=i;
		if(y[ym]>y[i]) ym=i;
		if(x[xM]<x[i]) xM=i;
		if(y[yM]>y[i]) yM=i;
	}
	
	if(xm==ym&&xM==yM){
		printf("%d", n);
		goto end;
	} else {
		ans=4;
		if(xm==ym){
			ans--;
		} //else {
//			for(int i=x[xm];i<x[ym];i++){
//				for(int j=y[ym];j<=2*x[ym]-(double)b/a;){
//				}
//			}
//		}
		if(xm==xM) ans--;
		if(xM==yM) ans--;
		if(ym==yM) ans--;
		printf("%d", ans);
		
		
		
		
		
	}
	
    
    end:
    	
    return 0;
}

