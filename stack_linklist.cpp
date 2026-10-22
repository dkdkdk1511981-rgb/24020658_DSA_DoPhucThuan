
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;
int n = 0;

bool isEmpty() {
    return head == NULL;
}

void push(int item) {
    Node* p = new Node;
    p->data = item;
    p->next = head;
    head = p;
    n++;
}

int pop() {
    if (isEmpty()) return -1;

    Node* p = head;
    int x = p->data;
    head = head->next;
    delete p;
    n--;

    return x;
}

int size() {
    return n;
}

int top() {
    if (isEmpty()) return -1;
    return head->data;
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
