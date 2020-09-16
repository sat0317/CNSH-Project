#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	char a[50][50];
	int x, y;
	int n;
	char w[1000000]={0, };

int canmove(char d){
	if(d=='R'){
		if(x==n-1){
			return 0;
		}
		if(a[y][x+1]=='U'){
			return 0;
		}
		x++;
		return 1;
	}
	if(d=='L'){
		if(x==0){
			return 0;
		}
		if(a[y][x-1]=='U'){
			return 0;
		}
		x--;
		return 1;
	}
	if(d=='D'){
		if(y==n-1){
			return 0;
		}
		if(a[y+1][x]=='U'){
			return 0;
		}
		y++;
		return 1;
	}
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", a[i]);
	}
	srand(time(NULL));
	for(int i=0;1;i++){
		int thisn;
		char ima[50][50];
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				ima[j][k]=a[j][k];
			}
		}
//		for(int j=0;j<n*n*n;j++){
//			int imsi;
//			if(rand()%2==0) imsi='R';
//			else if(rand()%2==1) imsi='L';
//			else imsi='U';
//			w[j]=imsi;
//		}
		x=0; y=0;
		for(int j=0;j<1;j++){
			int imsi;
			if(rand()%2==0) imsi='R';
			else if(rand()%2==1) imsi='L';
			else imsi='U';
			w[j]=imsi;
			
			if(y==n-1&&x==n-1) printf("%d %s", thisn, w);
			if(y==n) break;
			canmove(w[j]);
			if(ima[y][x]=='D'){
				thisn++;
				ima[y][x]='.';
			}
		}
	}
	
	return 0;
}
