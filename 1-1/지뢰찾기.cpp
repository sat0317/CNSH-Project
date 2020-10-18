#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define loop(i, n) for(int i=1;i<=(n);i++)

const int mineMax=40;
const int m=20;//map size

char map[m+2][m+2];//map_set
char mapOpen[m+2][m+2];//map_shown

int lessBomb=mineMax;

char checkNum(int x, int y){
	char a=0;
	if(map[x-1][y-1]=='@') a++;
	if(map[x-1][y]=='@') a++;
	if(map[x-1][y+1]=='@') a++;
	if(map[x][y-1]=='@') a++;
	if(map[x][y+1]=='@') a++;
	if(map[x+1][y-1]=='@') a++;
	if(map[x+1][y]=='@') a++;
	if(map[x+1][y+1]=='@') a++;
	
	return a;
}

void startSet(){
	int x=0, y=0;
	loop(i, mineMax){
		do{
			x=rand()%20+1;
			y=rand()%20+1;
		} while(map[x][y]=='@');
		map[x][y]='@';
	}
	
	loop(i, m){
		loop(j, m){
			if(map[i][j]=='@') continue;
			map[i][j]= checkNum(i, j)+'0';
		}
	}
//	loop(i, m){
//		loop(j, m){
//			printf("%c  ", map[i][j]);
//		}
//		printf("\n");
//	}
}

void startGame(){
	
}

int main(){
	srand(time(NULL));
	startSet();
	startGame();
	
	return 0;
}
