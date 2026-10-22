
#include <iostream>
using namespace std;

int a[100];
int front = 0, rear = -1, n = 0;

bool isEmpty() {
    return n == 0;
}

void enqueue(int item) {
    if (n == 100) return;

    rear++;
    a[rear] = item;
    n++;
}

int dequeue() {
    if (isEmpty()) return -1;

    int x = a[front];
    front++;
    n--;

    return x;
}

int peek() {
    if (isEmpty()) return -1;
    return a[front];
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
