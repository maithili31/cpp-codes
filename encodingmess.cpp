#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string a;
        cin>>a;
        for(int i=1;i<n;i+=2) { 
            char temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
        }
        int value=0;
        for(int i=0;i<n;i++) { 
            value=219-(int)a[i];
            a[i]=(char)value;
        }
        cout<<a<<endl;
    }
        return 0;
 }
