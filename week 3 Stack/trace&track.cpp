#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> n;

    n.push(4);
    n.push(8);
    n.push(12);

    n.pop();

    n.push(20);

    cout<<n.top()<<endl;
    cout<<n.size()<<endl;

    return 0;


}