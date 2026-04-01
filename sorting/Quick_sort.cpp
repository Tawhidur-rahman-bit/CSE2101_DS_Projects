#include <bits/stdc++.h>
using namespace std;

// 🔹 Partition (Quick Sort)
int partition(vector<int>& a, int low, int high) {
    int pivot = a[high]; // pivot element
    int i = low - 1;     // index of smaller element

    for(int j = low; j < high; j++) {
        if(a[j] < pivot) {
            i++;
            swap(a[i], a[j]); // swap a[i] and a[j]
        }
    }

    swap(a[i + 1], a[high]); // place pivot at correct position
    return i + 1;
}

// 🔹 Quick Sort
void quick_sort(vector<int>& a, int low, int high) {
    if(low < high) {
        int pi = partition(a, low, high);

        quick_sort(a, low, pi - 1);   // sort left half
        quick_sort(a, pi + 1, high);  // sort right half
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    quick_sort(a, 0, n - 1);

    cout << "Sorted array: ";
    for(int x : a) cout << x << " ";
    cout << endl;

    return 0;
}