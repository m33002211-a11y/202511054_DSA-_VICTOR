#include <iostream>

using namespace std;

int main() {
    int arr[4] = {16, 28, 9, 10};
    int n = 4;

    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble Sort Logic
    for (int i = 0; i < n - 1; i++) { 
        // Optimized inner loop: j < n - i - 1
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swapping
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "After swapping (sorted):" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
