#include <iostream>
int main() {
    int* arr = new int[5];  // Dynamically allocate memory for an array of 5 integers
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10; //this is how you assign values to a pointer array 
        std::cout << arr[i] << " ";  // Output: 0 10 20 30 40
    }
    std::cout << std::endl;

    delete[] arr;  // Deallocate memory allocated for the array

    arr = nullptr;  // Set the pointer to nullptr to avoid a dangling pointer

    return 0;
}
