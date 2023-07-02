#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int freq=1,i=1;
    while(i<n) {
        while(i<n && a[i]==a[i-1]) {
            freq++;
            i++;
        }
        cout<< "frequency of "<<a[i-1]<<" is "<<freq<<endl;
        i++;
        freq=1;
    }
    return 0;
}