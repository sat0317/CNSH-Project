#include <stdio.h>

int main(){
    int i, j, n, m, cnt=0, a[100][100];
    scanf("%d %d", &n, &m);
    
    for(i=0;i<n+m;i++){
        for(j=0;j<=i;j++){
            if(i-j<n&&j<m){
                a[i-j][j]=++cnt;
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
