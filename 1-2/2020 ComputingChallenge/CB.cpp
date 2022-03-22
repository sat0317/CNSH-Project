#include <stdio.h>
	int n, m, cnt=0, arr[100][100];
void thgs(int i, int j){
	if(arr[i][j]==0) arr[i][j]=cnt--;
	
}
int main(){
	int thx=-1, thy=0, mo=1, ti=0;
	scanf("%d %d", &n, &m);
	cnt=m*n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m-i;j++){
			thx+=mo;
			thgs(thy, thx);
		}
		for(int j=0;j<n-i-1;j++){
			thy+=mo;
			thgs(thy, thx);
		}
		mo*=-1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
