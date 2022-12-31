#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,element;
    cin>>n>>element;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (a[i]==element) {
            cout<<"yes"<<endl;
            break;
        } else {
            return -1;
        }
    }
    
    
    return 0;
}