#include <stdio.h>
#include <stdlib.h>
#define ifs(a, b, c) (a?b:c)
int main(){
    int n, a[10][10], i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=i*n+j+1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t", a[i][ifs(i%2, n-j-1, j)]);
        }
        printf("\n");
    }
    
    return 0;
}
