#include <bits/stdc++.h>
#include "Queueusingarray.h"
using namespace std;

int main() {
    QueueUsingArray<int> q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);

    cout<<q.front()<<endl;

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    cout<<q.getsize()<<endl;
    cout<<q.isEmpty()<<endl;
    
    return 0;
}
