#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
#define n 10
int main(){
    int map[10][10]={};
    int x=1, y=1;
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		scanf("%d", &map[i][j]);
		}
	}
	
	while(map[x][y]==0){
		map[x][y]=9;
		if(map[x][y+1]!=1){
			y++;
		} else if(map[x+1][y]!=1){
			x++;
		}
	}
	map[x][y]=9;
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
    
    return 0;
}

