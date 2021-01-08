#include <stdio.h>
#define MAX (1<<5)
int n, d[MAX];

void quicksort(int l, int r){
    int pivot=d[l];
    int p=l+1;
    int q=r;
    if(l>=r) return;
    
    while(1){
        while(d[p]<=pivot && p<r) p++; //greater than pivot
        while(d[q]>pivot && q>l) q--; //less or equal than pivot
        
        if(p<q){
            int t=d[p]; d[p]=d[q]; d[q]=t;
        } else {
            int t=d[l]; d[l]=d[q]; d[q]=t;
            break;
        }
        
    }
    
    quicksort(l, q-1);
    quicksort(q+1, r);    
} 

int main(){
    int i;
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        scanf("%d", &d[i]);
    }
    
    quicksort(1, n);
    
    for(i=1;i<=n;i++){
        printf("%d ", d[i]);
    }
    
    return 0;
}
