#include <iostream>
#include<math.h>
using namespace std;

int decimaltobinary (int n) {
    int ans=0;
    int x=1;
    while (x<=n) {
        
        ans = ans*10 + (n%10);
        x *= 2;
        n /= 2;
    }
    return ans;
}

int main () 
{
    int n;
    cin>>n;

    cout<<decimaltobinary(n)<<endl;
    }