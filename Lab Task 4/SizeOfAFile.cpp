
                 //OBTAINING FILE SIZE
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    streampos begin;
    streampos  end;

    // Open the binary file in input mode
    ifstream myfile("example.bin", ios::binary);

        // Get the current position (beginning)
        begin = myfile.tellg();
        
        // Move the file pointer to the end
        myfile.seekg(0, ios::end);
        
        // Get the current position (end)
        end = myfile.tellg();
        
        // Close the file
        myfile.close();
        
        // Calculate the size
        cout << "Size is: " << (end - begin) << " bytes." << endl;

    return 0;
}

