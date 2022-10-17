#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n<115) {
        cout<<"flyweight"<<endl;
    } else if (n>=115 && n<=121) {
        cout<<"bantamweight"<<endl;
    } else if (n>=122 && n<=153) {
        cout<<"featherweight"<<endl;
    } else if (n>=154 && n<=189) {
        cout<<"middleweight"<<endl;
    } else {
        cout<<"heavyweight"<<endl;
    }
    return 0;
}