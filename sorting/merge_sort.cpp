#include <bits/stdc++.h>
using namespace std;

// Merge function
void merge(vector<int>& a, int left, int mid, int right) {
    int i = left, j = mid + 1;
    vector<int> temp;

    while(i <= mid && j <= right) {
        if(a[i] < a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }

    while(i <= mid) temp.push_back(a[i++]);
    while(j <= right) temp.push_back(a[j++]);

    for(int k = 0; k < temp.size(); k++) {
        a[left + k] = temp[k];
    }
}

// Merge Sort function
void merge_sort(vector<int>& a, int left, int right) {
    if(left >= right) return;

    int mid = (left + right) / 2;

    merge_sort(a, left, mid);
    merge_sort(a, mid + 1, right);

    merge(a, left, mid, right);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    merge_sort(a, 0, n - 1);

    cout << "Sorted array: ";
    for(int x : a) cout << x << " ";
    cout << endl;

    return 0;
}