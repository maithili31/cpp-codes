#include <bits/stdc++.h>
using namespace std;

int main () {
    int n=2;
    while (n!=0) {
        switch (n) {
            case 1 :
                cout<<"factorial of a number"<<endl;
                 int factorial =1 ;
                for (int i=2; i<=n;i++) {
                    factorial = factorial*i ;
                }
                cout<<factorial<<endl;
                break;
            
            case 2 :
                for (int i=0;i<=sqrt(n);i++) {
                    if (n%i==0) {
                        cout<<"not prime"<<endl;
                        break;
                    } else {
                        cout<<"prime"<<endl;
                    }
                }
                break;
            case 3 :
                if (n%2==0) {
                    cout<<"even number"<<endl;
                } else {
                    cout<<"odd number"<<endl;
                }
                break;
            default :
                exit;
        }
    }
    return 0;
}