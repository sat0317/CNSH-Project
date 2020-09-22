#include <stdio.h>
#define loop(n, i) for(int i=0;i<n;i++)
#define ifs(a, b, c) ((a)?(b):(c))

int main(){
    int n, d[20][20]={0, }, num=1;
    scanf("%d", &n);
    loop(n, i){
        loop(n, j){
            d[i][j]=num++;
        }
    }
    
    loop(n, i){
        loop(n, j){
            printf("%d\t", d[i][ifs(i%2, n-j-1, j)]);
        }
        printf("\n"); 
    }
    
    return 0;
}
