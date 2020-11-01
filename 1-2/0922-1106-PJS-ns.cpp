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
    cout<<g<<endl;
    cout<<A::g<<endl;
    cout<<B::g<<endl;
    
    return 0;
}
