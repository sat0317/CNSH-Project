#include <stdio.h>

int main(){
    int n, t[1<<10]; //1<<10 은 1*2^10을 의미;  height는 10임 
    scanf("%d", &n);//개수 
    for(int i=1;i<=n;i++){ //tree는 선형 구조로도 저장될 수 있음(이진) 
        scanf("%d", &t[i]);
    }
    
    for(int k=1;k<=n;k*=2){//현재 depth를 명시적으로 작성 
        for(int i=k;i<=n&&i<=2*k-1;i++){//siblings 위치 가리킴 
            printf("%d ", t[i]);
        }
        printf("\n"); 
    }
    
    return 0;
} 
