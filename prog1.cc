// Don't forget to include the header block
// more information on keyword const on pages 95 - 97
// For if else format look at page 77
/*
* /home/cs2400/lab3/prog1.cc
* lab 105
* Blake Boehringer
* 9-12-19
* converting between Celsius and Fahrenheit and vice versa, then displaying the answer
*/

#include<iostream> 
#include<cstdlib>
using namespace std;

int main()
{
    const int INT1 = 15;
    const int INT2 = 20; 
    
    cout << "Sum of " << INT1 << " and " << INT2 << " is " << INT1+INT2 << endl;
    cout << "Product is " << INT1*INT2 << endl;

    if(INT1<INT2){
        cout << INT2 << " is bigger" << endl;;
    }else{
        cout<< INT1 << " is bigger" << endl;
    }

    return (EXIT_SUCCESS);
}