#include <bits/stdc++.h>
using namespace std;

int main () {
    double v,t;
    cin>>v>>t;
    double wcf=35.74+0.6125*t+(0.4275*t-35.75)*pow(v,0.16);
    cout<<wcf<<endl;

    return 0;
}