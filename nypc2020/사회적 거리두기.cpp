#include <stdio.h>
#include <stdlib.h>
char map[100][100];
char imsi[100][100];
	int n, k;
	
int goFind(int i, int j){
	//if(imsi[i][j]){
		if(imsi[i-1][j-1]) return 1;
		if(imsi[i-1][j]) return 1;
		if(imsi[i-1][j+1]) return 1;
		if(imsi[i][j-1]) return 1;
		if(imsi[i][j+1]) return 1;
		if(imsi[i+1][j-1]) return 1;
		if(imsi[i+1][j]) return 1;
		if(imsi[i+1][j+1]) return 1;
		if(map[i][j]) return 1;
	//}
	return 0;
}

int main(){
	int x, y, cnt;
	
	scanf("%d %d", &n, &k);
	
	for(int i=0;i<k;i++){
		scanf("%d %d", &x, &y);
		map[x-1][y-1]=1;
	}
	cnt=0;
	while(cnt==8){
		cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(!map[i][j])
					if(rand()%2&&!goFind(i, j)){
						imsi[i][j]=1;
						cnt++;
					}
			}
		}
	}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(imsi[i][j])
				printf("%d %d\n", i+1, j+1);
			}
		}
	
	
	return 0;
}
