#include <iostream>
using namespace std;

int part(int *a, int low, int high) {
    int temp;
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    do {
        while (i <= high && a[i] < pivot) {
            i++;
        }
        while (j >= low && a[j] >= pivot) {
            j--;
        }
        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void printarr(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void qs(int *a, int low, int high) {
    int pv;
    if (low < high) {
        pv = part(a, low, high);
        qs(a, low, pv - 1);
        qs(a, pv + 1, high);
    }
}

int main() {
    int ar[] = {45, 48, 98, 78, 453, 256, 1};
    int n = sizeof(ar) / sizeof(ar[0]);
   // printarr(ar, n);
    qs(ar, 0, n - 1);
    printarr(ar, n);
}
