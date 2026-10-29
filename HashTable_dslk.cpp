#include <iostream>
using namespace std;

const int SIZE = 10;

struct Node {
    int key;
    Node* next;
};

Node* table[SIZE] = {};

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);

    Node* p = new Node;
    p->key = key;
    p->next = table[index];
    table[index] = p;
}

bool search(int key) {
    int index = hashFunction(key);
    Node* p = table[index];

    while (p != NULL) {
        if (p->key == key)
            return true;
        p = p->next;
    }

    return false;
}

void removeKey(int key) {
    int index = hashFunction(key);
    Node* p = table[index];
    Node* prev = NULL;

    while (p != NULL) {
        if (p->key == key) {
            if (prev == NULL)
                table[index] = p->next;
            else
                prev->next = p->next;

            delete p;
            return;
        }

        prev = p;
        p = p->next;
    }
}

void display() {
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": ";
        Node* p = table[i];

        while (p != NULL) {
            cout << p->key << " -> ";
            p = p->next;
        }

        cout << "NULL" << endl;
    }
}

int main() {
    insert(12);
    insert(22);
    insert(32);
    insert(15);

    display();

    if (search(22))
        cout << "Tim thay 22" << endl;
    else
        cout << "Khong tim thay 22" << endl;

    removeKey(22);
    display();

    return 0;
}