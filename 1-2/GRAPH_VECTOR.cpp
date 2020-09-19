#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> a[100];
	int n, i, j, t1, t2, e;
	scanf("%d %d", &e, &n);
	
	for(i=0;i<n;i++){
		scanf("%d %d", &t1, &t2);
		a[t1-1].push_back(t2);
	}
	for(i=0;i<e;i++){
		printf("\n%d: ", i);
		for(j=0;j<a[i].size();j++){
			printf("%d\t", a[i][j]);
		}
	}
	
	return 0;
}
