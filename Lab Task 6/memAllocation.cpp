#include <iostream> 
using namespace std; 

int main() { 

    int numberOfElements = 0;
    int* dynamicArray = nullptr; // Initialize the pointer to nullptr
    cout << "How many numbers would you like to type? "; 
    cin >> numberOfElements; 

    dynamicArray = new int[numberOfElements]; // Allocate memory for the array

    // Check if memory allocation was successful
    if (dynamicArray == nullptr) { 
        cout << "Error: Memory could not be allocated"; 
    } 
    else{
      // Input numbers into the array
    for (int i = 0; i < numberOfElements; i++) { 
        cout << "Enter number: "; 
        cin >> dynamicArray[i]; 
   
    } 

    // Display the entered numbers
    cout << "You have entered: "; 
    for (int j = 0; j < numberOfElements; j++) { 
        cout << dynamicArray[j] << "; "; 

    } 
    cout << endl; // Add a new line for clarity

    // Deallocate the dynamically allocated memory
    delete[] dynamicArray; 

    return 0; 
   }
}