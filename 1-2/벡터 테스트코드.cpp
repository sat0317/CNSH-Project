#include <stdio.h>
#include <vector>
using namespace std;
void printv(vector<int> a, int b, int n){
	for(int i=b;i<n;i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}

int main(){
	vector<int> a;
	vector<int>::iterator p, k;   //int *p;  대신에 반복자 itertor 사용. 자료의 시작 위치, 위치값을 정하고, 증감할 수 있음. 124~125쪽 list 예제 참고. 
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	printv(a, 0, 3);
	p=a.begin();     //p=&a[1];
	k=p; k+=3;    
	printf("현재 반복자 p의 값 출력 : %d\n", *p); 
	a.insert(p, 1, 4);  // a.insert(2, 4);   학습지에는 최대한 간단히 사용예제를 탑재한 것임. 실제 프로그래밍할 때에는 자료의 위치는 반복자 변수(여기서는 p)로 정해야 함. 
	printv(a, 0, 4);
	p+=2;
	a.insert(p, 4, 5);  // a.insert(3, 4, 5);
	printv(a, 0, 8);
	printf("%d", *k);
	return 0;
}

