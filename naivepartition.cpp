#include <bits/stdc++.h>
using namespace std;

void partition(int a[], int l, int h, int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
        if(a[i]<=a[p] && i!=p) {
                temp[index]=a[i];
                index++;
            }
    temp[index++]=a[p];
    for(int i=l;i<=h;i++)
        if(a[i]>a[p]) {
                temp[index]=a[i];
                index++;
            }
    for(int i=l;i<=h;i++)
        a[i]=temp[i-l];
}
 
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
	
	partition(a,0,n-1,n-1);
	
	for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}