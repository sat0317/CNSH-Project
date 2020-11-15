#include <iostream>

using namespace std;

int g=0;

namespace A{
	int g=1;
}
int main(){
	cout<<g<<" "<<A::g<<" "<<B::g<<endl;
}
