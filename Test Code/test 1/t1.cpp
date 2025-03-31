#include <iostream>

using namespace std;

int main() {
    int a[] = {7, 49, -2, 4, 7, 64, 8, 7}; // Original array
    int n = sizeof(a) / sizeof(a[0]); // Get size of array
    int item; // Element to remove

    cout << "Enter the number to delete: ";
    cin >> item;

    int newsize = 0; // Track new size after deletion

    cout << "Array after each iteration:\n";
    
    // Iterate and shift elements to remove occurrences of item
    for (int i = 0; i < n; i++) {
        if (a[i] != item) {
            a[newsize] = a[i]; // Copy valid elements forward
            newsize++;
        }

        // Print array after each iteration
        cout << "Pass " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            if (j < newsize) // Print only the valid portion of the array
                cout << a[j] << " ";
            else
                cout << "_ "; // Placeholder for unused spots
        }
        cout << endl;
    }

    // Display final result
    cout << "\nNew array after deletion: ";
    for (int i = 0; i < newsize; i++) {
        cout << a[i] << " ";
    }
    cout << "\nNew size: " << newsize << endl;

    return 0;
}

