#include<stdio.h>
#define ARRAY 100001
#define ab(a) ((a)>0?(a):-(a))
	int d[ARRAY], s[ARRAY];
	int n, x, r;
	int t, p, i;
	int ts=0, imsi, te=2147483647;
	int ps=1000000000, pe=-1000000000;
	int mi=1000000000, ma=-1000000000;

void qsar(int arr[], int start, int end);
int main(){

	scanf("%d %d %d", &x, &r, &n);
    
	for(i=0;i<n;i++){
		scanf("%d %d", &d[i], &s[i]);
	}
	
	for(i=0;i<n;i++){

		if((d[i]<0&&s[i]<=0)||(d[i]>x+r&&s[i]>=0)){
            printf("F");
			return 0;
		}

		if(d[i]>x+r&&s[i]!=0){
			imsi=ab(-x-r+d[i])/ab(s[i]);
			if(imsi>ts) ts=imsi;
		} else if(d[i]<0&&s[i]!=0){
			imsi=ab(-d[i])/ab(s[i]);
			if(imsi>ts) ts=imsi;
		}

		if(s[i]>0){
			imsi=ab(x+r-d[i])/ab(s[i]);
			if(imsi<te) te=imsi;
		} else if(s[i]<0){
			imsi=ab(-d[i])/ab(s[i]);
			if(imsi<te) te=imsi;
		} else {
            if(d[i]<ps) ps=d[i];
            if(d[i]>pe) pe=d[i];
		}
	}

	if(pe-ps>r){
        printf("F");
        return 0;
	}

    for(i=0;i<n;i++){
        d[i]+=(ts)*s[i];
    }

	for(t=ts;t<=te+1;t++){
        mi=1000000000; ma=-1000000000;
		for(i=0;i<n;i++){
		    if(d[i]>ma) ma=d[i];
            if(d[i]<mi) mi=d[i];
			d[i]+=s[i];
		}
		if(ma-mi<=r&&ma<=x+r&&mi>=0){
			printf("T");
			return 0;
		}
	}

	printf("F");
	return 0;
}

