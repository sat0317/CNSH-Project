#include <stdio.h>
	int r, c;
	int map[1010][1010];
	
void cullok(int i, int j){
	if(map[i][j]==0) return;
	if(map[i][j]=='S') return;
	else {
		map[i][j]='S';
		cullok(i-1, j);
		cullok(i, j-1);
		cullok(i+1, j);
		cullok(i, j+1);
	}
}

int finder(int i, int j){
	if(map[i][j]==0) return 0;
	if(map[i][j]=='S'){
		return finder(i+1, j)+finder(i, j+1);
	} else {
		if(map[i-1][j]=='S'&&map[i][j-1]=='S'&&map[i+1][j]=='S'&&map[i][j+1]=='S'){
			map[i][j]='S';
			return 1+finder(i+1, j)+finder(i, j+1);
		} else {
			
			map[i][j]='S';
			cullok(i-1, j);
			cullok(i, j-1);
			cullok(i+1, j);
			cullok(i, j+1);
			
			return 1+finder(i+1, j)+finder(i, j+1);
		}
	}
}

void min(int i, int j, char order){
//	if(map[i][j]==0){
//		return;
//	} else if(map[i][j]=='L'){
//		min(i+1, j, 'L');
//		min()
//	}
}

void max(int i, int j, char order){
	if(map[i][j]==0){
		return;
	} else if(map[i][j]=='L'){
		max(i+1, j, 'S');
		max(i, j+1, 'S');
	} else if(map[i][j]=='S'){
		max(i+1, j, 'L');
		max(i, j+1, 'L');
	} else if(order=='L'){
		map[i][j]='L';
		max(i+1, j, 'S');
		max(i, j+1, 'S');
	} else{
		map[i][j]='S';
		max(i+1, j, 'L');
		max(i, j+1, 'L');
	}
}

int main(){
	int i;
	int s[4];
	scanf("%d %d", &r, &c);
	scanf("%s", map);
	for(i=1;i<=r;i++){
		scanf("%s", &map[i][1]);
	}
	if(s[1]){
		if(map[2][1]=='S'&&map[1][2]=='S')
			max(1, 1, 'L');
		else max(1, 1, 'S');
	} else {
//		min(1, 1);
	}
	printf("%d", finder(1, 1));
	return 0;
}
