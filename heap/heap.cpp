
#include <iostream>
using namespace std;

int a[100];
int n = 0;

// Them node
void insert(int x) {
    a[n] = x;
    int i = n;
    n++;

    while (i > 0 && a[i] > a[(i - 1) / 2]) {
        swap(a[i], a[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Heapify
void heapify(int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(largest);
    }
}

// Xoa node goc
void remove() {
    if (n == 0) return;

    a[0] = a[n - 1];
    n--;

    heapify(0);
}

// In Heap
void display() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(60);
    insert(80);

    cout << "Heap ban dau: ";
    display();

    insert(90);
    cout << "Sau khi them: ";
    display();

    remove();
    cout << "Sau khi xoa goc: ";
    display();

    return 0;
}
