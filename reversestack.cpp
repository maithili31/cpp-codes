#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    stack<int> s1;
    for (int i=0;i<n;i++) {
        int t;
        cin>>t;
        s1.push(t);
        cout<<s1.top()<<"  ";
        s1.pop();
    }
    return 0;
}