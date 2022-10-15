#include <bits/stdc++.h>
using namespace std;

int main () {
    int l,b;
    cin>>l>>b;
    int a=l*b;
    int p=2*(l+b);
    if (a>p) {
        cout<<"area"<<endl;
    } else if (p>a) {
        cout<<"perimeter"<<endl;
    } else {
        cout<<"equal"<<endl;
    }
    return 0;
}