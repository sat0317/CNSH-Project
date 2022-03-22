#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define fp p[0]
#define fd d[0]
#define fg g[0]
#define lp p[n]
#define ld d[n]
#define lg g[n]

int min(int a, int b) {return (a)<(b)?(a):(b);}

int p[500], d[500], g[500];
int n;
int nowanswers=0, nans[50000];

void going(int np, int nowtime, int nu[20], int nw){
	int i=np;
	nu[np]=1;
	if(np==n-1) nw=0;
	if(np==0&&nw==0) {
		nans[nowanswers++]=nowtime;
		return;
	}
	if(nw) {
		i++;
		while(p[i]<=d[np]+p[np]&&i<=n){
			if(!nu[i]){
				going(i, nowtime+1, nu, nw);
			}
			i++;
		}
	} else {
		i--;
		while(p[i]>=-d[np]+p[np]&&i>=0){
			if(!nu[i]&&g[i]){
				going(i, nowtime+1, nu, nw);
			}
			i--;
		}	
	}	
	if(np==0&&nw==0) {
		nans[nowanswers++]=nowtime;
		return;
	}
	
	return;
}

int main(){
	int imsd[20]={1, 0, }, minis=2147483647;
	scanf("%d", &n);
    for(int i=0;i<n;i++){
    	scanf("%d %d %d", &p[i], &d[i], &g[i]);
	}
	going(0, 0, imsd, 1);
	for(int i=0;i<nowanswers;i++){
		if(nans[i]<minis) minis=nans[i];
	}
	printf("%d", minis);
    
    
    return 0;
}
/*
8
0 7 1
3 4 1
6 8 1
8 6 1
12 1 0
13 2 1
14 2 1
15 7 1
*/

