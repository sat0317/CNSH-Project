#include<stdio.h>

int main(){
    int n, m, sum=1;
    int array[101][101]={};
    scanf("%d %d", &m, &n);
    for(int i=0;i<n;i++){
        if(!(i%2)){
            for(int j=0;j<m;j++){
               array[i][j]=sum++;
            }
        } else {
            for(int j=m-1; j>=0; j--){
               array[i][j]=sum++;
            }
        }
    }
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
      	    printf("%d\t", array[n-j-1][m-i-1]);
        }
        printf("\n");
    }
    return 0;
}
