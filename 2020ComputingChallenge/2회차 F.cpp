//4, 1 2 1 2 : 1
//5, 2 1 2 1 2 : 2
//5, 4 3 4 3 2 : 4
//5, 4 5 4 3 2 : 6
//5, 1 1 3 1 1 : 2
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
	int n, t, nt=0, b=-2147483648, k=0;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
			while(!v.empty()){
				if(v[0]>t){
					break;
				} else {
					v.erase(v.begin());
				}
			}
			while(!v.empty()){
				if(v[v.size()-1]>t){
					break;
				} else {
					v.erase(v.end()-1);
				}
			}
			k+=v.size();
		v.push_back(t);
		
	}
	printf("%d", k);
	return 0;
}
