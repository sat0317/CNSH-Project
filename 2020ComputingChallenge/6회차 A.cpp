#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <math.h>
#define maxs(a, b) (a>b?a:b)
#define mins(a, b) (a<b?a:b)
using namespace std;

struct point{
	bool blue=false; //L, R
	bool red=false; //U, D
};
point mapxy[101][101];
int mini=2147483647, minx1=-1, miny1=-1, minx2=-1, miny2=-1;
int maxx, maxy;

int main(){
	int x, y, n, im;
 	char c[10];
 	scanf("%d %d", &x, &y);scanf("%d", &n);
	maxx=x;maxy=y;
	for(int AS=0;AS<n;AS++){
		scanf("%s %d", c, &im);
		switch(c[0]){
			case 'U':
				for(int i=y;i<y+im;i++){
					mapxy[x][i].red=true;
				}
				y+=im;
				break;
			case 'D':
				for(int i=y-1;i>=y-im;i--){
					mapxy[x][i].red=true;
				}
				y-=im;break;
			case 'R':
				for(int i=x;i<x+im;i++){
					mapxy[i][y].blue=true;
				}
				x+=im;break;
			case 'L':
				for(int i=x-1;i>=x-im;i--){
					mapxy[i][y].blue=true;
				}
				x-=im;
		}
		if(maxx<x) maxx=x;
		if(maxy<y) maxy=y;
	}
	int imsix[2], imsiy[2], imsisize;
	for(int i=1;i<=maxx;i++){
		for(int j=1;j<=maxy;j++){
			x=i;y=j;
			if(mapxy[x][y].blue&&mapxy[x][y].red){
				int changed=0;
				for(int ix=x+1;ix<=maxx;ix++){
					if(mapxy[ix][y].red&&mapxy[ix-1][y].blue){
						for(int iy=y+1;iy<=maxy;iy++){
							if(mapxy[ix-1][iy].blue&&mapxy[ix][iy-1].red){
								imsix[0]=ix;imsiy[0]=iy;
								changed=1;
								break;
							}
						}
						break;
					}
				}
				if(!changed) continue;
				changed=0;
				for(int iy=y+1;iy<=maxy;iy++){
					if(mapxy[x][iy].blue&&mapxy[x][iy-1].red){
						for(int ix=x+1;ix<=maxx;ix++){
							if(mapxy[ix][iy-1].red&&mapxy[ix-1][iy].blue){
								imsix[1]=ix;imsiy[1]=iy;
								changed=1;
								break;
							}
						}
						break;
					}
				}
				
				if(!changed) continue;
				changed=0;
				
				if(imsix[0]==imsix[1]&&imsiy[0]==imsiy[1]){
					imsisize=(imsix[0]-x)*(imsiy[0]-y);
					if(imsisize<mini){
						minx1=x;
						miny1=y;
						minx2=imsix[0];
						miny2=imsiy[0];
						mini=imsisize;
					}
				}
			}
		}
	}
	
	
	if(minx1==-1){
		printf("0");
	} else {
		printf("%d %d\n%d %d", minx1, miny1, minx2, miny2);
	}
	return 0;
}
