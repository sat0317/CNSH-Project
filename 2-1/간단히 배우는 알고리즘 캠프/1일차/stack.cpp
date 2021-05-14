#include <stdio.h>
#include <stack>

using namespace std;

int main(){
	stack<int> s;
	for(int i=1;i<=5;i++){
		s.push(i);
	}
	s.pop();
	s.pop();
	s.pop();
	printf("%d", s.top());
	
	return 0;
}
