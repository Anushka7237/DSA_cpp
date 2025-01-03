#include <iostream>

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap the elements
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 34, 25,56, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Unsorted array: " << std::endl;
    printArray(arr, n);

    bubbleSort(arr, n);

    std::cout << "Sorted array: " << std::endl;
    printArray(arr, n);

    return 0;
}
