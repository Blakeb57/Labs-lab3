/*
* /home/cs2400/lab3/prog5.cc
* lab 105
* Blake Boehringer
* 9-12-19
* converting between Celsius and Fahrenheit and vice versa, then displaying the answer
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  //declare and initialize at the same time - page 48
   int cel = 20;

   ctof = (cel * 9/5) + 32;
   ftoc = (fah - 32) * 5/9 ;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
   cout << cel << " in Celsius is " << ctof << endl;
   cout << fah << " in Fahrenheit is " << ftoc << endl;

   return (EXIT_SUCCESS);
}