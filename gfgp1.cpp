#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int count=0;
    for (int i=-6;i<=n;i++) {
        if (i%6==0){
            count++;
        }
    }
    cout<<count<<endl;
}