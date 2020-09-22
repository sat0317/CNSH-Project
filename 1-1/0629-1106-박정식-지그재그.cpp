#include <stdio.h>
#define loop(n, i) for(int i=0;i<n;i++)
int main(){
    int n;
    scanf("%d", &n);
    
    loop(n, i){
        if(i%2==0){
            loop(n, j){
                printf("%d\t", i*n+j+1);
            }
        } else {
            loop(n, j){
                printf("%d\t", i*n-1+n-j+1);
            }
        }
        printf("\n"); 
    }
    
    return 0;
}
