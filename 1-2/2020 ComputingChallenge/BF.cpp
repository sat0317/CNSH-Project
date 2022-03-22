#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
    int h, w, n, l, d, x, y;
	int map[100][100];
void write(){
	if(d){
		for(int i=0;i<l;i++){
			map[x-1+i][y-1]=1;
		}
	} else {
		for(int i=0;i<l;i++){
			map[x-1][y-1+i]=1;
		}
		
	}
}

int main(){
    
    scanf("%d %d %d", &h, &w, &n);
    for(int i=0;i<n;i++){
    	scanf("%d %d %d %d", &l, &d, &x, &y);
    	write();
	}
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
    
    return 0;
}

