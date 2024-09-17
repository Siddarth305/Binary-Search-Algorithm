#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;

    int l = 0, h = n - 1, mid;
    bool found = false;
    while (l <= h) {
        mid = l + (h - l) / 2;

        if (arr[mid] == x) {
            found = true;
            cout << "Element found at index " << mid << endl;
            break;
        }

        if (arr[mid] < x) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
