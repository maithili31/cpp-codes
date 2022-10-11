#include <bits/stdc++.h>
using namespace std;

int main () {
    // perimeter of rectangle and area , circumference of circle. take length breadth radius input.
    int l,b,r;
    cin>>l>>b>>r;
    int rec= 2*(l+b);
    float ca=(22*(r*r))/7;
    float cir= (2*22*r)/7;
    cout<<rec<<"  "<<ca<<"  "<<cir<<endl;
    return 0;
}