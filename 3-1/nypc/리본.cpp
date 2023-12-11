#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#define swaping(a, b) temp=a;a=b;b=temp

using namespace std;
typedef pair<int,int> pii;
typedef long long int lli;

int tied[151]={};
int N, X[200], A[200], B[200], laiA[200]={};
lli max(lli a, lli b){
	return a>b?a:b;
}
lli find(int np, lli sum){
	if(np==N){
		return sum;
	}
	lli mx=sum;
	if(tied[np]) goto exit;
	int mi=2147483647;
	for(int i=np+1;i<N;i++){
		if(tied[i]){
			mi=mi>laiA[i]?laiA[i]:mi;
		}
	}
	for(int i=np+1;i<N;i++){
		laiA[i]=A[i]+A[np]+X[np]-X[i];
		tied[i]=1;
		
		if(laiA[i]>mi) mx = max(find(), mx);
		
		laiA[i]=A[i];
		tied[i]=1;
		
		mi=mi>laiA[i]?laiA[i]:mi;
	}
	
exit:
	mx = max(find(), mx);
	return mx;
}

void qSort(int l, int r){
	int pivot=X[l];
	int p=l+1;
	int q=r;
	if(l>=r) return;
	int temp;
	while(1){
		while(X[p] < pivot && p<r) p++;
		while(X[q] > pivot && q>l) q--;
		
		if(p<q){
			swaping(X[p], X[q]);
			swaping(A[p], A[q]);
			swaping(B[p], B[q]);
		} else {
			swaping(X[l], X[q]);
			swaping(A[l], A[q]);
			swaping(B[l], B[q]); break;
		}
	}
	
	qSort(l, q-1);
	qSort(q+1, r);
}

int main(){
	scanf("%d", &N);
	for(int i=0;i<N;i++) scanf("%d", X+i);
	for(int i=0;i<N;i++) scanf("%d", A+i);
	for(int i=0;i<N;i++) scanf("%d", B+i);
	qSort(0, N-1);
	for(int i=0;i<N;i++) A[i]*=2;
	for(int i=0;i<N;i++) tied[i]=-1;
	for(int i=0;i<N;i++) laiA[i]=A[i];
	
	
	
	
	return 0;
}
