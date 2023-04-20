#include <iostream>
#include "pair.cpp"
using namespace std;

template <typename T>
class pair {
    T x;
    T y;

    public:

    void setX(T x) {
        this -> x=x;
    }
    T getX() {
        return x;
    }
    void setY(T y) {
        this -> y=y;
    }
    T getY() {
        return y;
    }

};

int main () {
    pair<int> p;
    p.setX(10);
    p.setY(20);
    cout<<p.getX()<<"  "<<p.getY<<endl;
    pair<double> q;
    q.setX(10.3);
    q.setY(32.5);
    cout<<q.getX()<<"  "<<q.getY<<endl;

    return 0;

}