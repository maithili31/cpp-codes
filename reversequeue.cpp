#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        queue<int> q;
        for (int i=0;i<n;i++) {
            int t;
            cin>>t;
            q.push(t);
        }
        for (int i=0;i<n;i++) {
            cout<<q.back()<<endl;
            q.pop();
        }
    }
    return 0;
}