#include <stdio.h>

int main(){
    int arr[100][100]={0, }, i, j, n;
    scanf("%d", &n);
    arr[0][0]=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
