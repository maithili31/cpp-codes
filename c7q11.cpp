#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,n1;
    cin>>n>>n1;
    if (n=='1') {
        cout<<"factorial of a number"<<endl;
        int fact1=1;
        for (int i=1;i<=n1;i++){
            fact1=fact1*i;
        }
        cout<<fact1<<endl;
    }
    if (n=='2') {
        cout<<"prime or not"<<endl;
        for (int i=1;i<=sqrt(n1);i++) {
            if (n1%i==0) {
                cout<<"not prime"<<endl;
                break;
            } else {
                cout<<"prime number"<<endl;
            }
        }
    }
    if (n=='3') {
        cout<<"odd or even"<<endl;
        if (n1%2==0) {
            cout<<"even"<<endl;
        } else {
            cout<<"odd"<<endl;
        }
    }
    if (n=='4') {
        cout<<"done deal"<<endl;
    }
    return 0;
}