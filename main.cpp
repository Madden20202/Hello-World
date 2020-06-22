/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
   // Data Types

   /*
    C++, like C, can perform memory management!
    First, lets go over how much memory all the
    basic data types take
   */

   int age = 25; //Stores whole numbers, using 4 bytes
   float detailedAge = 25.67; //Stores fractional numbers up to seven decimal spaces, using 4 bytes
   double pi = 3.14159265358979; // Stores fractional numbers up to fifteen decimal spaces, using 4 bytes
   bool adult = true; // Stores true or false (1-0) values, using 1 bytes
   char middleInitial = 'A'; // Stores single characters, letters, or numbers using 1 byte

   cout << age << "\n";
   cout << detailedAge << "\n";
   cout << pi << "\n";
   cout << adult << "\n";
   cout << middleInitial << "\n";

   // Char and String

   /*
    Char is used to store single characters using single quotations ('').
    ASCII values may also be used to represent different letters or symbols, such as ! @ $ # or %
   */

   return 0;
}
