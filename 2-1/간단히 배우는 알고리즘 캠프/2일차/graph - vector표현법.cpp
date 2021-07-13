#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	vector<int> v[20];
	v[1].push_back(2);
	v[2].push_back(1);
	
	v[2].push_back(3);
	v[3].push_back(2);
	
	v[1].push_back(4);
	v[4].push_back(1);
	
	return 0;
}
