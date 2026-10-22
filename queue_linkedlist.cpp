
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;
int n = 0;

bool isEmpty() {
    return front == NULL;
}

void enqueue(int item) {
    Node* p = new Node;
    p->data = item;
    p->next = NULL;

    if (isEmpty()) {
        front = rear = p;
    } else {
        rear->next = p;
        rear = p;
    }

    n++;
}

int dequeue() {
    if (isEmpty()) return -1;

    Node* p = front;
    int x = p->data;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete p;
    n--;

    return x;
}

int peek() {
    if (isEmpty()) return -1;
    return front->data;
}

int size() {
    return n;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Front: " << peek() << endl;
    cout << "Size: " << size() << endl;
    cout << "Dequeue: " << dequeue() << endl;
    cout << "Front: " << peek() << endl;

    return 0;
}
