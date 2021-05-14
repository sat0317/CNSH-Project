#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	vector<int> v[10];
	
	v[0].push_back(1);
	v[0].push_back(2);
	v[3].push_back(3);
	v[3].push_back(4);
	v[0].push_back(5);
	v[3].pop_back();
	
	
	return 0;
} 
