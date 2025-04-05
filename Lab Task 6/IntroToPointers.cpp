#include <iostream> 
using namespace std; 

int main() { 
    // declare pointer and initialize it to nullptr
    // so that it doesnt store a random address 
    int* pPointer = nullptr; 

    // declare an integer variable and assign a value
    int integerVar = 5; 

    // Assign pointer to address of object 
    pPointer = &integerVar; 

    // output the value of integerVar 
    cout << "integerVar: " << integerVar << endl; 

    // output the address of integerVar 
    cout << "Address of integerVar : " << &integerVar << endl; 

    // output the address assigned to pPointer 
    cout << "pPointer: " << pPointer << endl; 

    // output the address of pPointer 
    cout << "Address of pPointer: " << pPointer << endl; 

    return 0; 
} 
