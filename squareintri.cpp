#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b;
        cin>>b;
        if((b)>=4)
        {
            if(b%2==0)
            {
                int c=(b-2)/2;
                cout<<(c)*(c+1)/2<<endl;
            }
            else
            {
                int c=(b-3)/2;
                cout<<c*(c+1)/2<<endl;
            }
        }
        else
        {
            cout<<"0\n";
        }
    }
    
}