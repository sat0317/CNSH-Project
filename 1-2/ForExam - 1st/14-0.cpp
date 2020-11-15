#include <iostream>

using namespace std;

int g=0;

namespace A{
	int g=1;
}
namespace B{
	int g=2;
}

int main(){
	cout<<g<<" "<<A::g<<" "<<B::g<<endl;
}
