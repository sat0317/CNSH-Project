#include <stdio.h>

int n, H[1<<10], s;

void up(int k){ //heapify
    int t;
    if(k==1) return; //root
    if(H[k/2]>H[k]){ //sort
        t=H[k/2];
        H[k/2]=H[k];
        H[k]=t;
        up(k/2); //from leaf to root
    }
} 

void push(int x){ //push
    H[++s]=x;
    up(s);//sorting for Heap
}

int main(){ 
    int t;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &t);
        push(t);
    }
    
    for(int k=1;k<=n;k*=2){ //tree
        for(int i=k;i<=n&&i<k*2;i++){
            printf("%d\t", H[i]);
        }
        printf("\n");
    }
    
    return 0;
}
