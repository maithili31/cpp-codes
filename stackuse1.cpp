#include <iostream>
#include "Stackusingtemp.cpp" 
using namespace std;

int main () {
    StackusingArray<char> s;
    s.push(100);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}