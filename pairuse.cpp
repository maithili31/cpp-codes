#include <iostream>
#include "pair.cpp"
using namespace std;

int main () {
    pairy<int> p1;
    p1.setX(10);
    p1.setY(20);
    cout<<p1.getX()<<"  "<<p1.getY()<<endl;

    pairy<double> p2;
    p2.setX(10.3);
    p2.setY(32.5);
    cout<<p2.getX()<<"  "<<p2.getY()<<endl;

    return 0;

}