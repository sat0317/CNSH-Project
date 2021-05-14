#include <algorithm>
#include <stdio.h> 
#include <vector>
using namespace std;

//sort(자료시작, 자료끝범위, 자료정렬기준);
int main(){
	int a[10]={};
	vector<int> v;
	for(int i=0;i<10;i++){
		scanf("%d", &a[i]);
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	for(int i=0;i<10;i++){
		printf("%d ", v[i]);
	} 
	
	return 0;
}
