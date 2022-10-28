#include <bits/stdc++.h>
using namespace std;

int main () {
    int size;
    int *pointer;
    cout<<"enter number of values to be stored"<<endl;
    cin>>size;

    pointer = new int[size];
    cout<<"enter values to be stored"<<endl;

    for (int i=0;i<size;i++) {
        cin>>pointer[i];
    }
    cout<<"values in array are"<<endl;

    for (int i=0;i<size;i++) {
        cout<<pointer[i]<<"  ";
    }
    return 0;
}