#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
#define abs(a) ((a)>0?(a):-(a))

int main(){
    int n, m, a, b, del, add, bar[510], min[510][510];
	
	scanf("%d %d %d %d %d %d", &n, &m, &a, &b, &del, &add);
	for(int i=1;i<=m;i++){
		scanf("%d", &bar[i]);
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			min[i][j]=2147483647;
		}
	}
	
	for(int i=1;i<=n;i++){
		min[0][i]=abs(a-i)*add; //추가하기만 함, 도착지로부터 거리 계산  
	}
    
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=n;j++){
    		for(int k=1;k<=n;k++){
    			int imsi=abs(k-j);
    			if(j==k && (bar[i]==k||bar[i]+1==k)){
					if((min[i-1][k]+del)<min[i][j]) min[i][j]=min[i-1][k]+del;
				} else if((j<=bar[i]&&bar[i]<k) || (k<=bar[i]&&bar[i]<j)){
					if((min[i-1][k]+imsi*add-add)<min[i][j]) min[i][j]=min[i-1][k]+imsi*add-add;
 				} else {
 					if((min[i-1][k]+imsi*add)<min[i][j]) min[i][j]=min[i-1][k]+imsi*add;
				}
			}
		}
	}
    
    printf("%d", min[m][b]);
    
    return 0;
}

