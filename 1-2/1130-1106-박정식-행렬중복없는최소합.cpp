#include <stdio.h>

int m[6][6];
int col_check[6];
int n, min_sum=10000;

void f(int row, int score){
	if(row==n+1){
		if(score < min_sum)
			min_sum = score;
		return;
	}
	for(int i=1;i<=n;i++){
		if(col_check[i]==0){
			col_check[i]=1;
			f(row+1, score+m[row][i]);
			col_check[i]=0;
		}
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &m[i][j]);
		}
	}
	f(1, 0);
	printf("%d", min_sum);
	
	return 0;
}
