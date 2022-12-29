#include<iostream>
using namespace std;
int main()
{
    int a[50], i, new1, pos, tot;
    cin>>tot;
    for(i=0; i<tot; i++) {
        cin>>a[i];
    }
    cout<<"Enter Element to Insert: "<<endl;
    cin>>new1;
    cin>>pos;
    for(i=tot; i>=pos; i--) {
        a[i]=a[i-1];
        a[i]=new1;
    }
    tot++;
    for(i=0; i<tot; i++) {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    return 0;
}