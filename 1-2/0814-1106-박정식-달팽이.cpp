#include <stdio.h>

int main(){
    int t=1, h=0, m, n, tx=0, ty=0, i, j, cnt=0, a[100][100];
    scanf("%d %d", &n, &m);
    
    for(cnt=1;cnt<=i*j;){
        for(j=0;j<=n-h;j++){
            a[ty][tx]=cnt++;
            tx+=t;
        }
        tx-=t;
        ty+=t;
        
        for(j=0;j<m-h;j++){
            a[ty][tx]=cnt++;
            ty+=t;
        }
        ty-=t;
        tx+=t;
        t*=-1;
        
        h-=2;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
