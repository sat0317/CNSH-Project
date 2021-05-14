#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	vector<int> v;
	
	for(int i=0;i<5;i++){
		int temp;
		scanf("%d", &temp);
		v.push_back(temp);
	}
	printf("%d", v[2]);
	
	return 0;
} 
