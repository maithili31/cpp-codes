#include <iostream>
#include<math.h>
using namespace std;

int decimaltobinary (int n) {
    int ans=0;
    int x=1;
    while (x>0) {
        int lastdigit= n/x;
        n -= lastdigit*x;
        x /=2 ;
        ans = ans*10 + lastdigit ;
    }
    return ans;
}

int main () 
{
    int n;
    cin>>n;

    cout<<decimaltobinary(n)<<endl;
    }