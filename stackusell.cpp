#include <iostream>
using namespace std;

template <typename T>
class Node {
    public:
        T data;
        Node<T> *next;

        Node (T data) {
            this -> data=data;
            next= NULL;
        }
};

template <typename T>
class stacky {
    Node<T> *head;
    int size=0;

    public: 
        stacky() {
            head = NULL;
            size=0;
        }
        int getsize() {
            return size;
        }
        bool isEmpty () {
            return size==0;
        }
        void push(T element) {
            Node<T> *newnode= new Node<T> (element);
            newnode -> next=head;
            head= newnode;
            size++;
        }
        T pop() {
            if (isEmpty()) {
                return 0;
            }
            T ans=head -> data;
            Node<T> *temp=head;
            head = head -> next;
            delete temp;
            size--;
            return ans;
        }
        T top() {
            if (isEmpty()) {
                return 0;
            }
            return head -> data;
        }
};