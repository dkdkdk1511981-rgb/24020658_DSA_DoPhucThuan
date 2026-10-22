
#include <iostream>
using namespace std;

int a[100];
int topIndex = -1;

bool isEmpty() {
    return topIndex == -1;
}

void push(int item) {
    if (topIndex == 99) return;
    a[++topIndex] = item;
}

int pop() {
    if (isEmpty()) return -1;
    return a[topIndex--];
}

int size() {
    return topIndex + 1;
}

int top() {
    if (isEmpty()) return -1;
    return a[topIndex];
}

int main() {
    push(10);
    push(20);
    push(30);

    cout << "Top: " << top() << endl;
    cout << "Size: " << size() << endl;
    cout << "Pop: " << pop() << endl;
    cout << "Top: " << top() << endl;
    cout << "Empty: " << isEmpty() << endl;

    return 0;
}
