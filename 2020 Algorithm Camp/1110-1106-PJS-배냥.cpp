#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
int n, w, wi[101], vi[101], cache[10001];

int answering(int now_w, int now_idx){ //(c) 2020. ÀÌµ¿ÈÆ. All rights reserved. 
	if(now_idx>n) return 0;
	
	int& ret = cache[now_idx];
	if(ret!=-1) return ret;
	
	for(int i=now_idx+1;i<=n+1;i++){
		if(now_w+wi[i]<=w){
			ret=max(ret, vi[i]+answering(now_w+wi[i], i));
		}
	}
	return ret;
}

int main(){
	scanf("%d %d", &n, &w);
	for(int i=1;i<=n;i++){
		scanf("%d %d", &wi[i], &vi[i]);
	} 
	
	memset(cache, -1, sizeof(cache));
	
	printf("%d", answering(0, 0));
    
    return 0;
}

