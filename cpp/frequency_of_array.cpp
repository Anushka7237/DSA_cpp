#include <iostream>

void findFrequencies(int arr[], int size) {
    bool counted[size] = {false}; // To track counted elements

    for (int i = 0; i < size; ++i) {
        if (!counted[i]) { // If this element is not counted yet
            int count = 1; // Initialize count for this element
            for (int j = i + 1; j < size; ++j) {
                if (arr[i] == arr[j]) { // If we find a duplicate
                    count++;
                    counted[j] = true; // Mark as counted
                }
            }
            // Print frequency of the current element
            std::cout << "Element " << arr[i] << " appears " << count << " times." << std::endl;
        }
    }
}

int main() {
    int myArray[] = {1, 2, 3, 2, 1, 4, 1, 3, 3, 2};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    findFrequencies(myArray, size);

    return 0;
}
