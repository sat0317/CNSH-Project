#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> Qu;
    
    int i;
    for(i=1;i<=3;i++){
        Qu.push(i);
    }
    for(i=0;i<2;i++){
        cout<<Qu.front()<<" ";
        Qu.pop();
    }
    
    cout<<endl;
    
    Qu.push(4);
    Qu.push(5);
    while(!Qu.empty()){
        cout<<Qu.front()<<" ";
        Qu.pop();
    }
    
    
    return 0;
}
