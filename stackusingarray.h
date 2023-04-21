#include <climits>
#include <iostream>

class StackusingArray {
    int *data;
    int nextindex;
    int capacity;

    public:

    StackusingArray() {
        data = new int[4];
        nextindex=0;
        capacity=4;
    }
    int size() {
        return nextindex;
    }
    bool isEmpty() {
        return nextindex==0;
    }

    void push(int element) {
        if (nextindex==capacity) {
            int *newdata= new int [2*capacity];
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
    int pop() {
        if (isEmpty()) {
            std::cout<<"stack is empty"<<std::endl;
        }
        nextindex--;
        return data[nextindex];
    }

    int top() {
        if (isEmpty()) {
            std::cout<<"Stack is empty"<<std::endl;
            return INT_MIN;
        }
        return data[nextindex-1];
    }

};