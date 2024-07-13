#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    // Get mid, length of first and second half
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Creating two sub arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copying array into smaller arrays
    int orgArray = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[orgArray++];
    }
    orgArray = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[orgArray++];
    }

    // Get index of two small arrays for traversal and merge
    int index1 = 0;
    int index2 = 0;
    orgArray = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[orgArray++] = first[index1++];
        } else {
            arr[orgArray++] = second[index2++];
        }
    }

    // Copy remaining elements of first array, if any
    while (index1 < len1) {
        arr[orgArray++] = first[index1++];
    }

    // Copy remaining elements of second array, if any
    while (index2 < len2) {
        arr[orgArray++] = second[index2++];
    }

    // Free the memory allocated for sub arrays
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main() {
    int arr[] = {4, 2, 6, 1, 7, 9,899,4,34 ,2,34,5,43,76,97,32,435,87,23,56,58};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
