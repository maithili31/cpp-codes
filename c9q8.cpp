#include <bits/stdc++.h>
using namespace std;

float ints(int a, int b, int c,int d, int e) {
    int sum = a+b+c+d+e;
    cout<<sum<<" ";
    float avg= (a+b+c+d+e)/5;
    cout<<avg<<"  ";
    float x= ((avg*avg)/5)-((avg/5)*(avg/5));
    float sd= pow(x,0.5);
    cout<<sd<<"  ";
}

int main () {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int y=ints(a,b,c,d,e);
    cout<<y<<"  "<<endl;
    return 0;
}