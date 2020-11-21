#include <stdio.h>

struct matrix{
	int a[2][2];
};

int main(){
	int i, j, k, c, n;
	matrix t, tt, m[10];
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d", &m[i].a[0][0], &m[i].a[0][1], &m[i].a[1][0], &m[i].a[1][1]);
	}
	t.a[0][0]=1;	t.a[0][1]=0;	t.a[1][0]=0;	t.a[1][1]=1;
	tt.a[0][0]=0;	tt.a[0][1]=0;	tt.a[1][0]=0;	tt.a[1][1]=0;
	
	for(c=0;c<n;c++){
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				for(k=0;k<2;k++){
					tt.a[i][j]+=t.a[i][k] * m[c].a[k][j];
				}
			}
		}
		
		t.a[0][0]=tt.a[0][0];
		t.a[0][1]=tt.a[0][1];
		t.a[1][0]=tt.a[1][0];
		t.a[1][1]=tt.a[1][1];
		tt.a[0][0]=0;	tt.a[0][1]=0;	tt.a[1][0]=0;	tt.a[1][1]=0;	
	}
	
	printf("%d\t%d\n%d\t%d", t.a[0][0], t.a[0][1], t.a[1][0], t.a[1][1]);
		
	return 0;
}
