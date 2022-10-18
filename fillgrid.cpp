#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m%2==0)
        {
            if(n%2==0)
            {
                cout<<"0 \n";
            }
            else{
                cout<<m<<"\n";
            }
        }
        else
        {
            if(n%2==0)
            {
                cout<<n<<"\n";
            }
            else
            {
                cout<<(n+m)-1<<"\n";
            }
        }
    }
}