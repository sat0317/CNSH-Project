#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, arr[100][100];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][n-j-1]=i*n+j+1;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
