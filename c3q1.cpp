#include <bits/stdc++.h>
using namespace std;

int main () {
    int cp,sp;
    cin>>cp>>sp;
    if (sp>cp) {
        cout<<"profit"<<"  "<<sp-cp<<endl;
    } else {
        cout<<"loss"<<"  "<<cp-sp<<endl;
    }
    return 0;
}