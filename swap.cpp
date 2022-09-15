#include <bits/stdc++.h>
using namespace std;

void swap(int *a , int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main () {
    int a=2;
    int b=4;

    int *apointer=&a;
    int *bpointer=&b;

    swap (apointer,bpointer);
    cout<<a<<" "<<b<<endl;
}