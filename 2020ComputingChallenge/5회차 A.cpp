#include <stdio.h>

int main(){
	int map[5][5];
	int max=-2147483648;
	int dx[]={-1, 0, 1, -1, 0, 1, -1, 0, 1}, dy[]={-1, -1, -1, 0, 0, 0, 1, 1, 1};
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	for(int x=1;x<4;x++){
		for(int y=1;y<4;y++){
			int imsi=0;
			for(int i=0;i<9;i++){
				imsi+=map[x-dx[i]][y-dy[i]];
			}
			if(imsi>max) max=imsi;
		}
	}
	printf("%d", max);
	
	return 0;
}
