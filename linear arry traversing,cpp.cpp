#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;        // input array size

    int arr[n];      // declare array

    // input elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // traverse and print elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
