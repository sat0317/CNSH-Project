#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n=50000, pi, pivot, d[50001];

void partition(int left, int right){
    int low, high;
    
    if(pi==left) low=left+1;
    else low=left;
    
    if(pi==high) high=right-1;
    else high=right;
    
    while(low<high){
        while(d[low]<=pivot && low<right) low++;
        while(d[high]>pivot && high>left) high--;
        
        if(low<high){
            int t=d[low]; d[low]=d[high]; d[high]=t;
        } else {
            int t=d[pi]; d[pi]=d[high]; d[high]=t;
        }
    }
    
    pi=high;
}

void qsort(int left, int right){
    if(left>=right) return;
    
    pi=left;
    pivot=d[left];
    partition(left, right);
    qsort(left, pi-1);
    qsort(pi+1, right);
}

int main(){
    int i, j, t;
    srand((unsigned int) time(NULL));
    
    for(i=1;i<=n;i++) d[i]=rand()%n+1;
    qsort(1, n);
    
    for(i=1;i<=n;i++) printf("%d\t", d[i]);
    
    return 0;
}
