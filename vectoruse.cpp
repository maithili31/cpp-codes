#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> v; 
    v.push_back (10);
    v.push_back (20);
    v.push_back(30);
    v[1]=100;
    v[4]=2002;
    v[5]=101;
    v.push_back(23);
    v.push_back(234);

    for (int i=0;i<v.size();i++) {
        cout<<v[i]<<"  ";
    }
    cout<<v[5]<<endl;
    cout<<endl;
    return 0;
}