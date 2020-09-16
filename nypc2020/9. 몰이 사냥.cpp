#include <stdio.h>
#include <math.h> 

#define ab(a) ((a)>0?(a):-(a))

int main(){
	int x, r, n;
	int d[100000];
	int s[100000];
	int time[100000]={0, };
	int i, j, k, l;
	int zeros=0;
	int zerod[100000];
	int shfinds=0;
	int shfind[100000];
	int timeless[100000];
	
	scanf("%d %d %d", &x, &r, &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &d[i], &s[i]);
		if((d[i]<-r&&s[i]<=0)||(d[i]>x+r&&s[i]>=0)){
			printf("F");
	        fseek(stdin, 0, SEEK_END);
			return 0;
		} else 
		if(s[i]==0){
			time[i]=-1;
			zerod[zeros]=d[i];
			zeros++;
		} else {
			shfind[shfinds]=i;
			shfinds++;
			if(d[i]>x+r){
				time[i]=ceil((double)(x+r-d[i])/s[i]);
			} else if(d[i]<-r){
				time[i]=ceil((double)(-r-d[i])/s[i]);
			}
			if(s[i]>0){
				timeless[i]=ceil((double)(x+r-d[i])/s[i]);
			} else {
				time[i]=ceil((double)(-r-d[i])/s[i]);
			}
		}
	}
	for(i=0;i<zeros;i++){
		for(j=i+1;j<zeros;j++){
			if(ab(zerod[i]-zerod[j])>2*ab(r)){
				printf("F");
				return 0;
			}
		}
	}
//	
//	for(i=0;i<shfinds;i++){
//		for(j=i+1;j<shfinds;j++){
//			if(timeless[shfind[i]]<time[shfind[j]]||timeless[shfind[j]]<time[shfind[i]]){
//				printf("F");
//				return 0;
//			}
//		}
//	}
	
	
	
	
	printf("T");
	
	
	
	
	return 0;
}
