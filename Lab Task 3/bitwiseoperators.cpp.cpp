#include <iostream>
using namespace std;

int main() {
   unsigned int a = 60;           // 60 = 0011 1100 In Binary
   unsigned int b = 13;           // 13 = 0000 1101 
   int c = 0;

   c = a & b;                      // Bitwise AND   12 = 00001100
   cout << "Line 1 - Value of c is: " << c << endl;

   c = a | b;                      // Bitwise OR  61 =00111101
   cout << "Line 2 - Value of c is: " << c << endl;

   c = a ^ b;                      // Bitwise XOR 49 = 00110001
   cout << "Line 3 - Value of c is: " << c << endl;

   c = ~a;                         // Bitwise NOT (One's complement -61 = 11000011
   cout << "Line 4 - Value of c is: " << c << endl;

   c = a << 2;                     // Bitwise left shift 240 = 11110000
   cout << "Line 5 - Value of c is: " << c << endl;

   c = a >> 2;                     // Bitwise right shift 15 = 00001111
   cout << "Line 6 - Value of c is: " << c << endl;

   return 0;
}

