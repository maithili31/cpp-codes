#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;

    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currentlength=0 , maxlength=0;

    while (1)
     {
        if (arr[i]== ' ' || arr[i]== '\0') {
            if (currentlength>maxlength) 
            {
                maxlength=currentlength;
            }
            currentlength=0;
        }
        else 
        {
        currentlength++; 
        }

        
        if (arr[i]=='\0')
            break;
    }
    cout<<maxlength<<endl;

    return 0;
}