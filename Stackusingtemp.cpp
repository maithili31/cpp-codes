#include <climits>
#include <iostream>

template <typename T>
class StackusingArray {
    T *data;
    T nextindex;
    T capacity;

    public:

    StackusingArray() {
        data = new T[4];
        nextindex=0;
        capacity=4;
    }
    T size() {
        return nextindex;
    }
    bool isEmpty() {
        return nextindex==0;
    }

    void push(T element) {
        if (nextindex==capacity) {
            T *newdata= new T [2*capacity];
            for (int i=0;i<capacity;i++) {
                newdata[i]=data[i];
            }
            capacity*=2;
            delete [] data;
            data= newdata;
        }
        data [nextindex]= element;
        nextindex++;
    }
    T pop() {
        if (isEmpty()) {
            std::cout<<"stack is empty"<<std::endl;
        }
        nextindex--;
        return data[nextindex];
    }

    T top() {
        if (isEmpty()) {
            std::cout<<"Stack is empty"<<std::endl;
            return INT_MIN;
        }
        return data[nextindex-1];
    }

};