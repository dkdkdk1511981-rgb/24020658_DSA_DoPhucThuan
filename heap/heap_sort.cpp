
#include <iostream>
using namespace std;

// Heapify
void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

// Heap Sort
void heapSort(int a[], int n) {

    // Tao Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Sap xep
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

// In mang
void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {4, 10, 3, 5, 1};
    int n = 5;

    cout << "Mang ban dau: ";
    display(a, n);

    heapSort(a, n);

    cout << "Mang sau khi sap xep: ";
    display(a, n);

    return 0;
}
