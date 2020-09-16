//격자게임 new
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
#define mapsize (map[1]+map[2]+map[3])

int map[6];
int t[2], imx, imy; long long int imrand=2;

void remvar(int x, int y){
	switch(x){
		case 3:
			if(map[3]>=y) map[3]=y-1;
		case 2:
			if(map[2]>=y) map[2]=y-1;
		case 1:
			if(map[1]>=y) map[1]=y-1;
	}
	//for(int i=1;i<=3;i++) printf("%d ", map[i]);
}



int main(){
//	srand(time(NULL));
	scanf("%d %d %d", &map[1], &map[2], &map[3]);
	while(mapsize){
		//{
			if(map[1]==2&&map[2]==3&&map[3]>5){
				imx=3;
				imy=6;
			} else if(map[1]!=0&&map[3]-map[2]==1){
				imx=1;
				imy=1;
			}
			else if(map[1]==2&&map[2]>3&&map[3]==5){
				imx=2;
				imy=4;
			}
			else if(map[1]==3&&map[2]==3&&map[3]==5){
				imx=1;
				imy=3;
			}
			else if(map[1]==0&&map[2]==map[3]){
				imx=2;
				imy=map[2];
			}
			else if(map[1]==0&&map[3]>map[2]+1){
				imx=3;
				imy=map[2]+2;
			}
			else if(map[1]==1&&map[2]==1&&map[3]>3){
				imx=3;
				imy=4;
			}
			else if(map[2]>1&&map[3]==3&&map[1]>1){
				imx=2;
				imy=2;
			}
			else if(map[1]==0&&map[2]==1&&map[3]>2){
				imx=3;
				imy=3;
			}
			else if(map[1]==1&&map[2]==1&&map[3]==2){
				imx=1;
				imy=1;
			}
			else if(map[1]==0&&map[2]==2&&map[3]==2){
				imx=2;
				imy=2;
			}
			else if(map[1]==0&&map[2]==1&&map[3]==1){
				imx=2;
				imy=1;
			}
			else if(map[1]==0&&map[2]==0&&map[3]==2){
				imx=3;
				imy=2;
			}
			else if(map[2]==map[1]+1&&map[3]>map[2]+2){
				imx=3;
				imy=map[2]+3;
			}
			else if(map[2]>map[1]+1&&map[3]==map[2]+2){
				imx=2;
				imy=map[1]+2;
			} 
			else if(map[2]==map[1]&&map[3]==map[2]+2){
				imx=1;
				imy=map[1];
			} else {
//				imx=rand()%3+1;
				imx=(imrand++)%3+1;
				imy=map[imx];
			}
		//}
		printf("%d %d\n", imx, imy);	fflush(stdout);
		remvar(imx, imy);
		
		scanf("%d %d", &t[0], &t[1]);
		printf("3 1\n");
			fflush(stdout);
		
		return 0;
		remvar(t[0], t[1]);
	}
	return 0;
} 
