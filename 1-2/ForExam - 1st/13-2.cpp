#include <stdio.h>
#include <vector>

struct lines{
	int to;
	int co;
};
std::vector<lines> a[10];

int main(){
	int n, e, i, j, t1, t2, t3;
	scanf("%d %d", &n, &e);
	for(i=0;i<e;i++){
		scanf("%d %d %d", &t3, &t1, &t2);
		a[t3-1].push_back({t1, t2});
		a[t1-1].push_back({t3, t2});
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<a[i].size();j++){
			printf("%d:%d\t", a[i][j].to, a[i][j].co);
		}
		printf("\n");
	}
	
	return 0;
}
