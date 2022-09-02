#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int sum=0;
    int originalno=n;
    while (n>0)
    {
        int lastdigit=n%10;
        sum= lastdigit*lastdigit*lastdigit + sum;
        n=n/10;
    }
    if (sum==originalno) {
        cout<<"Armstrong no"<<endl;
    }
    else {
        cout<<"not armstrong no"<<endl;
    }



}