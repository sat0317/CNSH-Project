#include <algorithm>
#include <stdio.h> 
#include <vector>
using namespace std;

//sort(�ڷ����, �ڷ᳡����, �ڷ����ı���);
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
