#include <bits/stdc++.h>
using namespace std;

int main () {
    int a=10;
    int *apointer= &a;

    cout<<*apointer<<endl;
    *apointer=20;
    cout<<a<<endl;

    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *pointer=arr;
    for (int i=0;i<3;i++) {
        cout<<*pointer<<endl;
        pointer++;
    }

}