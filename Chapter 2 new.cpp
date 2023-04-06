

#include <iostream>

using namespace std;

int main()
{
	// Identifier
	int num1;
	  // Variable

		// Comment
		// This is a comment

		// Variable declaration
		int num2 = 5; // Variable declared and initialized

	// Basic data type
	float number = 5.5; // Floating point data type

	// Characters
	char character = 'A'; // Single character

	// Characters and numbers
	string str = "Hello World"; // A sequence of characters and numbers

	// Constants
	const int MAX_VALUE = 100; // Constant value

	// Input/Output statements
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Number entered is: " << num1 << endl;

	// Operators
	// Arithmetic operator
	int sum = num1 + num2;
	cout << "Sum of num1 and num2 is: " << sum << endl;

	// Relational operator
	if (num1 == num2)
		  cout << "num1 and num2 are equal\n";
	else
		  cout << "num1 and num2 are not equal\n";

	// Logical operator
	if (num1 > 0 && num2 < 10)
		  cout << "num1 is greater than 0 and num2 is less than 10\n";

	// Bitwise operator
	int bitwise = num1 & num2; // Bitwise AND operator
	cout << "Result of bitwise AND operation: " << bitwise << endl;

	// Increment operator
	num1++; // Increment operator
	cout << "After incrementing num1: " << num1 << endl;

	// Decrement operator
	num2--; // Decrement operator
	cout << "After decrementing num2: " << num2 << endl;

	// Precedence
	int result = num1 + num2 * 5; // precedence of '*' is higher than '+'
	cout << " result = "<<result;
}