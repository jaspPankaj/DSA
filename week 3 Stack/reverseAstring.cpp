#include <iostream>
#include <stack>

using namespace std;

int main(){

    string s = "HELLO";

    stack<char> ch;

    for(int i = 0; i < s.size(); i++){
        
        ch.push(s[i]);
    }



    while(!ch.empty()){
        cout<<ch.top();
        ch.pop();
    }

    



 

    return 0;


}