#include <iostream>
using namespace std;

const int SIZE = 10;

int table[SIZE];
bool used[SIZE] = {};

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);

    for (int i = 0; i < SIZE; i++) {
        int pos = (index + i) % SIZE;

        if (!used[pos]) {
            table[pos] = key;
            used[pos] = true;
            return;
        }

        if (table[pos] == key)
            return;
    }

    cout << "Hash Table day!" << endl;
}

bool search(int key) {
    int index = hashFunction(key);

    for (int i = 0; i < SIZE; i++) {
        int pos = (index + i) % SIZE;

        if (!used[pos])
            return false;

        if (table[pos] == key)
            return true;
    }

    return false;
}

void display() {
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": ";

        if (used[i])
            cout << table[i];
        else
            cout << "EMPTY";

        cout << endl;
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

    return 0;
}