#include <bits/stdc++.h>
using namespace std;

int main () {
    // marks obtained in  5 subjects is given . max marks of each subject is 100. find aggregate marks and percentage
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int f=a+b+c+d+e;
    cout<<f<<endl;
    float i=(f/5);
    cout<<i<<endl;
    return 0;
}