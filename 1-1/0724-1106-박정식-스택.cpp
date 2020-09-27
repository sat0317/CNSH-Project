#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> St;
    int i;
    for(i=1;i<=3;i++){
        St.push(i);
    }
    for(i=0;i<2;i++){
        cout<<St.top()<<" ";
        St.pop();
    }
    
    cout<<endl;
    
    St.push(4);
    St.push(5);
    while(!St.empty()){
        cout<<St.top()<<" ";
        St.pop();
    }
    
    
    return 0;
}
