#include <bits/stdc++.h>
using namespace std;

int main () {
    char x;
    cin>>x;
    int y=int(x);
    if (y>=65 && y<=90) {
        cout<<"capital letter"<<endl;
    } else if (y>=97 && y<=122) {
        cout<<"small letter"<<endl;
    } else if (y>=48 && y<=57){
        cout<<"digit"<<endl;
    } else {
        cout<<"special symbol"<<endl;
    }

    return 0;
}