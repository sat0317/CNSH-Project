#include <stdio.h>
#define gul(a, b) (((a)>0&&(a)<=n&&(b)>0&&(b)<=n)?guling((a), (b)):0)
    int a[100][100], n, pnt[10000], now;
    int checked[100][100];
    
void sort(){
    for(int i=0;i<now;i++){
        for(int j=i+1;j>0&&pnt[j]>pnt[j-1];j--){
            int t=pnt[j-1]; pnt[j-1]=pnt[j]; pnt[j]=t;
        }
    }
}

int guling(int x, int y){
    if(!a[x][y]||checked[x][y]) return 0;
    checked[x][y]=1;
    return gul(x+1, y)+gul(x, y+1)+gul(x-1, y)+gul(x, y-1)+1;
}

int main(){
    
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int k=guling(i, j);
            if(k){
                pnt[now++]=k;
            }
        }
    }
    
    sort();
    
    printf("%d\n", now);
    for(int i=0;i<now;i++){
        printf("%d\n", pnt[i]);
    }
    
    
    return 0;
}
