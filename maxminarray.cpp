#include<iostream>
#include<climits>
using namespace std;

int main () {
    int n;
    cin>>n;

    int arr[n];

    for (int i=0;i<=n-1;i++) {
        cin>>arr[i];
    }
    int maxno= INT_MIN;
    int minno= INT_MAX;

    for (int i=0;i<=n;i++){
        if (minno>arr[i]) {
            minno=arr[i];
        }
        if (arr[i]>maxno) {
            maxno=arr[i];
        }
        cout<<maxno<<" "<<minno<<endl;
    }
    return 0;
}