#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[101][101]={0, }, m[101][101]={0, }, b, i, j;
    scanf("%d %d", &n, &b);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=b;j++){
            scanf("%d", &a[i][j]);
            m[i][j] = a[i][j]+m[i][j-1]+m[i-1][j]-m[i-1][j-1];//m[i][j-1]�� m[i-1][j]�� ���� �κ��� m[i-1][j-1]��; ����κ� ���� 
        }
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=b;j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
