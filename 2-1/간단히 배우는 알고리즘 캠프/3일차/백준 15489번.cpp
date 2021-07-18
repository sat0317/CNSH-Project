#include <stdio.h>

using namespace std;

int cf(int n, int r){
	if(r==0||r==n) return 1;
	else if(r<0||r>n) return 0;
	else return cf(n-1, r)+cf(n-1, r-1);
} 

int main(){
	int r, c, w; long long int ans=0;
	scanf("%d %d %d", &r, &c, &w);
	
	for(int i=0;i<w;i++){
		for(int j=0;j<=i;j++){
			ans+=cf(i+r, j+c);
		}
	}
	printf("%lld", ans);
	
	return 0;
}
