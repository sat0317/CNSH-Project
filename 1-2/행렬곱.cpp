#include <stdio.h>

struct matrix{ int d[2][2]; };

int main(){
	int n, i, j, k, c;
	matrix m[5], t, tt;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
		for(k=0;k<2;k++)
			scanf("%d %d", &m[i].d[k][0], &m[i].d[k][1]);
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==j) t.d[i][j]=1;
			else t.d[i][j]=0;
			tt.d[i][j]=0;
		}
	}
	
	for(c=0;c<n;c++){
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				for(k=0;k<2;k++)
					tt.d[i][j]+=t.d[i][k]*m[c].d[k][j];
		
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				t.d[i][j]=tt.d[i][j];
				tt.d[i][j]=0;
			}
		}
	}
	
	printf("%d %d\n%d %d", t.d[0][0], t.d[0][1], t.d[1][0], t.d[1][1]);
	
	return 0;
}
