#include <bits/stdc++.h>
using namespace std;

int main () {
    // the distance bw two cities (km ) is given. convert into m,feet,cm,inches
    int a;
    cin>>a;
    int m=1000*a;
    int cm=m*100;
    float feet= a*3280.84 ;
    float inches = a*39370.1;
    cout<<m<<"  "<<cm<<"  "<<feet<<"  "<<inches<<endl;
    return 0;
}