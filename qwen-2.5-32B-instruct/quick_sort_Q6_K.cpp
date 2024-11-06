#include <iostream>
#include <vector>

using namespace std;

// Partition function
int partition(vector<int>& arr, int low, int high) {
    // Choose the pivot element (last element in this case)
    int pivot = arr[high];

    // Index of the smaller element
    int i = low - 1;

    // Iterate through the array
    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            // Swap the elements
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot element with the element at (i + 1)
    swap(arr[i + 1], arr[high]);

    // Return the pivot index
    return i + 1;
}

// Quick sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}


int main() {
    // Sample usage
    vector<int> arr = {5, 2, 9, 1, 7, 6, 3, 8, 4};
    int n = arr.size();

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array using quick sort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
} 
