#include <stdio.h>
#include <vector>
#include <utility>
using namespace std;

int main(){
	vector<pair<int, int> > v;
	
	v.push_back({1, 2});
	v.push_back({3, 5});
	v.push_back({10, 9});
	//make_pair(10, 2)
	
	v.pop_back();
	
	printf("%d", v[0].first);
	
	return 0;
} 
