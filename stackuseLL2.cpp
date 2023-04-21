#include <iostream>
#include "stackusell.cpp" 
using namespace std;

int main () {
    stacky<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.getsize()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}