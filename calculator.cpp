#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1 , n2 ;
    cout<<"input two numbers:"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"input an operator :"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    
    default:
        cout<<"not defined"<<endl;
        break;
    }




}