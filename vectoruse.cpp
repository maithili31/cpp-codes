#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> v; 

    for (int i=0;i<100;i++) {
        cout<<"capacity ="<<v.capacity() <<endl;
        cout<<"size ="<<v.size()<<endl;
        v.push_back(i+1);
    }

    v.push_back (10);
    v.push_back (20);
    v.push_back(30);
    v[1]=100;
    v.push_back(23);
    v.push_back(234);

    v.pop_back ();

    for (int i=0;i<v.size();i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    return 0;
}