#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, arr[100][100], cnt=0;
    scanf("%d %d", &n, &m);
        for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
            arr[n-i-1][m-j-1]=++cnt;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
