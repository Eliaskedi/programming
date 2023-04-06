//Chapter 3


#include <iostream> 
using namespace std; 

int main() 
{ 
    // One way if statement
    int num = 10; 
    if (num > 0) 
        cout << "Number is positive.\n"; 
  
    // Multi way if else statement 
    char ch = 'a'; 
    if (ch == 'a') 
        cout << "Its an alphabet.\n"; 
    else if (ch == '1') 
        cout << "Its a digit.\n"; 
    else
        cout << "Its a special character.\n"; 
  
    // Nested if statement 
    int n = 15; 
    if (n >= 0) { 
        if (n == 0) 
            cout << "Number is 0\n"; 
        else
            cout << "Number is positive.\n"; 
    } 
    else
        cout << "Number is negative.\n"; 
  
    return 0; 
}